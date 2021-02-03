#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream theFile("players.txt");
    int id;
    string name;
    double money;

    // every file have a file marker
    while(theFile >> id >> name >> money){
    // file pointer
    // keep track where the file that cpp is working with
         cout << id << ", " << name << ", " << money << endl;

    }

}