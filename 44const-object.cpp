#include <iostream>
#include "Sally.cpp"
using namespace std;

int main()
{
    // const object needs const function
    const int x = 3;
    // x = 5;
    // cout << x << endl;
   const Sally salObj;
    salObj.printConst();
}