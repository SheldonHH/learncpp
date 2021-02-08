#include <eosio/eosio.hpp>
using namespace eosio;
using namespace std;

//class [[eosio::contract]]
CONTRACT tictactoe : public contract
{
public:
    using contract::contract;

    ACTION welcome(name host, name challenger)
    {
        require_auth(get_self());
        string message = "Welcome, challengers" + host.to_string() + challenger.to_string();
        print(message);
    }

private:
};