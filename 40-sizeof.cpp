#include <iostream>
using namespace std;

int main()
{
    char c; // 1 byte
    int i; // 4 bytes
    double d; // 8 bytes
    cout << sizeof(c) << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(d) << endl;

    double bucky[10];
    cout << sizeof(bucky) << endl;
    cout << sizeof(bucky) / sizeof(bucky[0]) << endl;
}