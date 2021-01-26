#include <iostream>
using namespace std;

int main(){
    int fish = 5;
    // memory address of the fish
    cout << &fish << endl;

    int *fishPointer;
    fishPointer = &fish; 
    // pointer equals to the memory address of fishPointer

    cout << fishPointer << endl;


}