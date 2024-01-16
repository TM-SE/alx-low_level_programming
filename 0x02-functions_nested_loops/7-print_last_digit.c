#include "main.h"
/**
*print_last_digit - funcction to print last digit
*Return: Return the last digit
*/
int print_last_digit(int r)
{
	int lastd;

	lastd = r % 10;

	return (lastd);
	_putchar(lastd + '0');

	if ( lastd < 0)
	{
	lastd = lastd * -1;
	return (lastd);
	}




}
