#include <iostream>
using namespace std;

class StankFist{
    public:
        StankFist() { stinkyVar = 0; }

    private:
        int stinkyVar;

    // you can make sb your friend it has to accept you as your friend
    friend void stinkysFriend(StankFist &sfo);

};

void stinkysFriend(StankFist &sfo){
    sfo.stinkyVar=99;
    cout << sfo.stinkyVar << endl;
    // assess the member of that class
}

int main()
{
    StankFist bob;
    stinkysFriend(bob);

}