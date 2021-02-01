// base class Mother.hpp
#ifndef MOTHER_H
#define MOTHER_H
#pragma once
	
class Mother  
{
	private:
        int privatev;
	public:
		Mother();
        ~Mother();
        void sayName();
        int publicv;

    protected:
        int protectedv;
};
#endif