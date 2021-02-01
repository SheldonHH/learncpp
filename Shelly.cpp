#include "Shelly.hpp"  
	
Shelly::Shelly()
{
	
}
	
Shelly::Shelly(int a)
{
	num = a;
}

Shelly Shelly::operator+(Shelly aso){
    //return a brand new Shelly object
    Shelly brandNew;
    brandNew.num = num + aso.num;
    return(brandNew);
}