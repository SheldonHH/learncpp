#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream buckysFile("beefjerk.txt");

    if(buckysFile.is_open()){
        cout << "ok the file is open" <<endl;
    }else{
        cout << "bucky you messed up" << endl;
    }
    buckysFile << "oi love the beef" << endl;
    buckysFile.close();
}