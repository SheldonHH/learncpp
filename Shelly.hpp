#ifndef SHELLY_H
#define SHELLY_H
#pragma once
	
class Shelly  
{
	private:

	public:
        int num;
        Shelly();
        Shelly(int); //operator overloading
        Shelly operator+(Shelly);

};
#endif