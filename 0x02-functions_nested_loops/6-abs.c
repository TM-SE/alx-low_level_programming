#include "main.h"
/**
*int _abs - function that computes the absolute value of an integer
*@r: variable to be checked
*Return: returns asolute value
*/
int _abs(int r)
{
	
	if ( r < 0)
	{
		r = r * -1;
		_putchar(r + '0');
	}

	return(r);
}
