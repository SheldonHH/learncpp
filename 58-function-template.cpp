#include <iostream>
using namespace std;
// plus minus multiple
// int addCrap(int a, int b)
// {
//     return a + b;
// }
template <class bucky>
bucky addCrap(bucky a, bucky b){
    return a+b;
}



int main()
{
    // int
    double x=7,y=43,z;
    z=addCrap(x,y);
    cout << z << endl;

    // double x = 7, y = 43, z;
}