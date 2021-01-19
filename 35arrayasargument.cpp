#include <iostream>
using namespace std;

int main(){
   int bucky[3] = {20, 54, 675};
   int jessica[6] = {54,24,7,8,9,99}; 

   printArray(bucky,3);
}


void printArray(int theArray[], int sizeOfArray){
    // how long to make the loop
    for(int x = 0; x<sizeOfArray; x++){
        cout << theArray[x] <<endl;
    }

 

}