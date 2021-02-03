#include <iostream>
using namespace std;

// Template generic data type
template <class T>
class Bucky{
    T first, second;
    public: // constructor
        Bucky(T a, T b){
            first = a;
            second = b;
        }
        T bigger();
};

// template <class T>
// T Bucky<T>::bigger(){
//     return (first>second?first:second);
// }

template <class T> //ADD this before every TEMPLATE FUNCITON

T Bucky<T>::bigger()
{ // YOU NEED GENERIC DATA TYPE after your class name
    return (first > second ? first : second);
}

int main(){
    Bucky<int> bo(123,3123);
    cout << bo.bigger();
}

// template <class T>
// class Bucky{
//     T first, second;
//     public:
//         Bucky(T a, T b){
//             first=a;
//             second=b;
//         }
//         T bigger();
// };

// template <class T>
// T Bucky<T>::bigger(){
//     return (first>second?first:second);
// }

// // Bucky<int>非常重要
// int main(){
//     Bucky<int> bo(69,105);
//     cout << bo.bigger();
// }
