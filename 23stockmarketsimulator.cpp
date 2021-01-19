#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    float p = 10000;
    float r = .03;
    for (int day = 1; day <=30; day++){
        a = p*pow(1+r, day); //1.1% to the 20 power
        cout << day << " ----- " << a << endl;
    }
}