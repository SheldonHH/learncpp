#include <iostream>
#include <fstream>
using namespace std;
// !!!!!PROTOTYPE !!!!!///
int getWhatTheyWant();
void displayItems(int x);

// main funciton
int main()
{
    int whatTheyWant;
    // catch the menu choice
    whatTheyWant = getWhatTheyWant();
    while (whatTheyWant != 4)
    {
        switch (whatTheyWant)
        {
        case 1:
            // display items multiple times
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        }
        whatTheyWant = getWhatTheyWant();
    }
}

// getWhatTheywant funciton

int getWhatTheyWant()
{
    int choice;
    cout << "\n1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit programs\n" << endl;
    cin >> choice;
    return choice;
}

// display items function
void displayItems(int x)
{
    // access to file
    // ifstream objectFile("")
    ifstream objectFile("object.txt");
    // name two objects
    string name;
    double power;

    if (x == 1)
    {
        //loop thru each object
        while (objectFile >> name >> power)
        {
            if (power == 0)
            {
                cout << name << ' ' << power << endl;
            }
        }
    }
    if (x == 2)
    {
        //loop thru each object
        while (objectFile >> name >> power)
        {
            if (power > 0)
            {
                cout << name << ' ' << power << endl;
            }
        }
    }
    if (x == 3)
    {
        //loop thru each object
        while (objectFile >> name >> power)
        {
            if (power < 0)
            {
                cout << name << ' ' << power << endl;
            }
        }
    }
}