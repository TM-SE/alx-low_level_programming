#include "main.h"
/**
*jack_bauer - function that prints every minute of the day of Jack Bauer
*Return: time
*/
void jack_bauer(void)
{
	int hours;
	int minutes;

	for ( hours = 0; hours < 23; hours++)
	{
		_putchar ( hours +'0');

		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar(':');
			_putchar(minutes);
		}
		}
}
		
