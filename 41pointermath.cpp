#include <iostream>
using namespace std;

int main()
{
    int bucky[5];
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];

    // each integer takes four bytes in the computer
    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;

    // Didn't change the memory address, only change where it points to.

    // bp0 +=2;
    // cout << "Now bp0 is at " << bp0 << endl;
    bp0 ++;
    cout << "Now bp0 is at " << bp0 << endl;
}