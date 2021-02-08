#include <eosio/eosio.hpp>
#include <eosio/string.hpp>
using namespace eosio;

//class [[eosio::contract]]
CONTRACT toyhaus : public contract
{
public:
    using contract::contract;
    // TABLE
    // {
    //     uint64_t id = 0;
    //     string toyname;
    //     string toydescrip;
    //     uint64_t quantity;
    //     name owner = name("toyboss");

    //     auto primary_key() const { return id; }
    // };
    // typedef eosio::multi_index<name("toyshelf"), toy> toyshelf_table;

    // [[eosio::action]]
    ACTION welcome(name arrival)
    {
        print("Welcome to the Toy Haus!");
    }

    // [[eosio::action]]
    // ACTION welcome(name arrival)
    // {
    //     // print("Welcome to the Toy Haus");
    //     toyshelf_table_toyshelf(get_self(), get_self().value)
    //         check(has_auth(name("toyboss")), "You are not our owner!");
    //     check(arrival == name("toyboss"), "Please don't lie about your name!");
    // }

    // //[[eosio::action]] void
    // ACTION addtoy(int128_t id, string toyname, string toydescrip, uint64_t quantity)
    // {

    //     toyshelf_table _toyshelf(get_self(), get_self().value);
    //     // add the new toy tif it does not exist
    //     _toyshelf.emplace(get_self(), [&](auto &new_toy_row) {
    //         new_toy_row.id = _toyshelf.available_primary
    //     });
    //     // modify to increase quantity if toy does exist
    //     // modifying doesnot change the name or description
    // }

private:
}