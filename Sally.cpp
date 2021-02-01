#include <iostream>
#include "Sally.hpp"
using namespace std;
//45 member initialization list
Sally::Sally(int a, int b) 
: regVar(a), 
constVar(b)
{
    cout << "I am Constructor" << endl;
}


void Sally::print45MemberInitalizedList(){
    cout << "45 Member Initalized Members: " << endl;
    cout << "regVar:"<< regVar <<endl;
    cout << "constVar:" << constVar << endl;
}
//45 initialize 


// add const after the parenthesis
void Sally::printConst() const{
    cout << "Q44 Const Object " << endl;
}

void Sally::printCrap(){
    cout << "Q42 Did you say steak? "<<endl; 
}
	
    //squiggly sign, tilde
    // no deconstructor overloading
// Sally::~Sally() // disabled in Q45
// {
// 	cout << "I am DEconstructor" << endl;
// }