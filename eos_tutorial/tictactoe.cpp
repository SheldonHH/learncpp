#include <eosio/eosio.hpp>
using namespace eosio;
using namespace std;

//class [[eosio::contract]]
CONTRACT tictactoe : public contract
{
public:
    using contract::contract;
    name admin = name("tictactoe");
    TABLE game
    {
        uint64_t id = 0;
        name host;
        name challenger;

        auto primary_key() const { return id; }
    };
    typedef eosio::multi_index<name("gametable"), game> game_table;

    ACTION welcome(name host, name challenger)
    {
        require_auth(get_self());
        string message = "Welcome, challengers" + host.to_string() + " " + challenger.to_string();
        print(message);
    }

    ACTION create(const name &challenger, name &host)
    {
        require_auth(host);
        game_table _table(get_self(), get_self().value);
        for (auto it = _table.begin(); it != _table.end(); ++it)
        {
            check(!(it->challenger == challenger && it->host == host || (it->host == challenger && it->challenger == host)), "the host vs the challenger have already existed in previous round of game.");
        }
        _table.emplace(get_self(), [&](auto &new_game_row) {
            new_game_row.id = _table.available_primary_key();
            new_game_row.host = host;
            new_game_row.challenger = challenger;
        });
    }

    ACTION close(const name &challenger, const name &host)
    {
        require_auth(host);
        game_table _table(get_self(), get_self().value);
        // find toy
        // if toy doesn't exist, error
        auto it = _table.begin();
        ;
        bool found = false;
        for (; it != _table.end(); ++it)
        {
            // print(it->challenger == challenger, it->host == host);
            if (it->challenger == challenger && it->host == host)
            {

                _table.erase(it);
                print("successfully erased game between ", challenger, " and ", host);
                found = true;
                break;
            }
        }
        check(found, "no match game to be erased!");
    }

private:
};