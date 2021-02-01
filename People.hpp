#ifndef PEOPLE_H
#define PEOPLE_H
// #pragma once
// int m, int d, int y) 
#include "Birthday.hpp"
#include <string>
using namespace std;
class People  
{
public:
    People(string x, Birthday bo);
    void PrintInfo();

private:
    string name;
    Birthday dateOfBirth; // pass in Birthday object, pretty cool ah?

protected:
    // ~People();

};
#endif