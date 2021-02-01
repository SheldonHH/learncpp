#ifndef DAUGHTER_H
#define DAUGHTER_H
#include "Mother.hpp"
#pragma once
	// include all stuff from Mother class
class Daughter:public Mother  
{
	private:

	public:
        Daughter();
        ~Daughter();
        void doSth();
};
#endif