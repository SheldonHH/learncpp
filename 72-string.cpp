#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s1("OMG I think ");
   cout << s1.substr(1)<< endl;

    string one("apples");
    string two("beans");
    cout << one << two << endl;
    one.swap(two);
    cout << one << two << endl;
    


    string h("ham is spam oh yeah i am!");
    // 出错了！！！！
    cout << s1.find("am") << endl;

    cout << h.find("am") << endl;
    cout << h.rfind("am") << endl;
}