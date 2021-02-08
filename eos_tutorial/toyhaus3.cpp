#include <eosio/eosio.hpp>
using namespace eosio;
using namespace std;
//class [[eosio::contract]]
CONTRACT toyhaus2 : public contract
{
public:
    using contract::contract;
    TABLE toy
    {
        uint64_t id = 0;
        string toyname;
        string toydescrip;
        uint64_t quantity;
        name owner = name("toyboss");

        auto primary_key() const { return id; }
    };
    typedef eosio::multi_index<name("toyshelf"), toy> toyshelf_table;

    // [[eosio::action]]
    // ACTION welcome(name arrival)
    // {
    //     print("Welcome to the Toy Haus!");
    // }

    // [[eosio::action]]
    ACTION welcome(name arrival)
    {
        // print("Welcome to the Toy Haus");
        toyshelf_table _toyshelf(get_self(), get_self().value);
        check(has_auth(name("toyboss")), "You are not our owner!");
        check(arrival == name("toyboss"), "Please don't lie about your name!");
    }

    // if id is -1, this is a new toy. Otherwise, we are adding more toys
    // //[[eosio::action]] void
    ACTION addtoy(int128_t id, string toyname, string toydescrip, uint64_t quantity)
    {

        toyshelf_table _toyshelf(get_self(), get_self().value);
        // add the new toy tif it does not exist

        // add toy if id is -1,
        if (id == -1)
        {
            _toyshelf.emplace(get_self(), [&](auto &new_toy_row) {
                new_toy_row.id = _toyshelf.available_primary_key();
                new_toy_row.toyname = toyname;
                new_toy_row.toydescrip = toydescrip;
                new_toy_row.quantity = quantity;
            });
        }
        else
        {
            auto itr = _toyshelf.find(id); // id is the pk
            check(itr != _toyshelf.end(), "toy with given id not found!");
            _toyshelf.modify(itr, get_self(), [&](auto &row_to_modify) {
                row_to_modify.quantity += quantity;
            });
        }
        // find the record
        // throw an error if toy does not exist
        // modify to increase quantity if toy does exist
        // modifying doesnot change the name or description,
    }

    ACTION removetoy(int128_t id, uint64_t quantity)
    {
        require_auth(name("toyboss"));
        toyshelf_table _toyshelf(get_self(), get_self().value);
        // find toy
        // if toy doesn't exist, error
        auto itr = _toyshelf.find(id);
        if ((itr->quantity - quantity) == 0)
        {
            _toyshelf.erase(itr);
            print("successfully erased toy ", id, "x", quantity);
        }
        //delete record，防止出现overflow
        else
        { /// 更好的check quantity <=itr->quantity
            check(quantity <= itr->quantity, "You are trying to have negative toys!");
            _toyshelf.modify(itr, get_self(), [&](auto &row_to_modify) {
                row_to_modify.quantity -= quantity;
            });
        }

        //subtract quantity
    }

private:
};