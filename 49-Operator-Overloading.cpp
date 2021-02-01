#include <iostream>
#include "Shelly.cpp"
using namespace std;

int main()
{
    Shelly a(34);
    Shelly b(21);
    Shelly c;

    // c.num=a.add(b);
    c=a+b; //specially use 
    cout << c.num << endl;

}