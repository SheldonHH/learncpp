#include <iostream>
#include <string>
using namespace std;

int main()
{
    string bucky;
    cin >> bucky;
    // the first of the input is determined by the first whitespace of the input
    cout << bucky << endl;

    string s2, s3;
    string s1("hampster");
    s3.assign(s1);
    cout << s1 << s2 << s3 << endl;

    string ss1="omgdds";
    cout << ss1.at(3) << endl;

    for(int x = 0; x< s1.length();x++){
        cout << "!!!"<< s1.at(x);
    }
}