#include "main.h"
/**
*print_sign -  function that prints the sign of a number
*@n: variable to be chekced
*Return: return 1or 0 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
		_putchar(45);
		return (-1);


}

