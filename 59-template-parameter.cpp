#include <iostream>
using namespace std;
// Template Parameter 
// template <class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b){
    return (a<b?a:b);
}
// using multiple parameters
template <class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b){
    return (a<b?a:b);
}
int main()
{
    int x = 89;
    double y = 56.78;
    // (int, double) and return a int
    // convert double into int
    // FIRST smaller(FIRST, SECOND)
    cout << smaller(y,x) << endl;

}