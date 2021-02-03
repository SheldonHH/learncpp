#include <iostream>
using namespace std;

int main()
{
    try{
        int momsAge = 30;
        int sonsAge = 34;
        
        if(sonsAge > momsAge){
            throw 313099;
        }

    }catch(int x){
        cout << "Son can't be older than mom !, ERROR NUMBER: " << x << endl;
    }

}