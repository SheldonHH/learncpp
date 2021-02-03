#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream theFile("players.txt");

    cout << "Enters players ID, Name and Money: " << endl;

    // look for end-file-marker
    cout << "Press Ctrl + Z to quit \n" << endl;

    int idNum;
    string name;
    double money;

    while(cin >> idNum >> name >> money){
        theFile << idNum << ' ' << name << ' ' << money << endl;
    }

}