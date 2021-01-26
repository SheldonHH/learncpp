#include <iostream>
using namespace std;
// Passing by Value，we actually passing a copy of the variable
// Passing variable by address 【Passing by Reference】
void passByValue(int x);
void passByReference(int *x) ;

int main()
{
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy);

    cout << "betty is now " << betty << endl;
    cout << "sandy is now " << sandy << endl;
}

void passByValue(int x){
    x=99; //passing the copy of it
}

void passByReference(int *x){
    *x=66;  
}