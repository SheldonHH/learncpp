#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s1("hi my name is bucky");
   cout << s1 << endl;
    // s1.erase(20);
     cout << s1 << endl;
    // replace(index,numchar,"")
     //!!! b is 14th index, 5 char to replace
    // use find() + replace()
     s1.replace(14, 5, "Tort");
          cout << s1 << endl;
      s1.insert(14,  "Luck");
         cout << s1 << endl;


}