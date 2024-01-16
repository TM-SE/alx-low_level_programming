#include "main.h"
/**
*print_last_digit - funcction to print last digit
*@r: number to be evaluated
*Return: Return the last digit
*/
int print_last_digit(int r)
{
	int lastd;

	lastd = r % 10;

	if (lastd < 0)
	{
	lastd = lastd * -1;
	}

	_putchar(lastd + '0');
	return (lastd);



}
