#ifndef SALLY_H
#define SALLY_H
#pragma once
	
class Sally  
{
	private:
        int regVar;
        const int constVar;

	public:
		Sally(int a,  int b);
        void print45MemberInitalizedList();

        // ~Sally(); //squiggly sign, tilde, disabled in 45 section
        void printCrap();
        // const added after the parenthesis
        void printConst() const;
};
#endif