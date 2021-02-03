#include <iostream>
#include <fstream>
using namespace std;
// !!!!!PROTOTYPE !!!!!///
int getWhatTheyWant();
    // main funciton
    int main()
{
    int whatTheyWant;
    whatTheyWant = getWhatTheywant();
    while(whatTheyWant != 4){
        // switch(whatTheyWant){
        //     case 1:
        //         // display items multiple times
        //         displayItems(1);
        //         break;
        //     case 2:
        //         displayItems(2);
        //         break;
        //     case 2:
        //         displayItems(2);
        //         break;
        // }
        whatTheyWant = getWhatTheywant();
    }
}

// getWhatTheywant funciton

int getWhatTheyWant(){
    int choice;
    cout << "1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit programs" << endl;
    cin >> choice;
    return choice;
}