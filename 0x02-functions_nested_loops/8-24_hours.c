#include "main.h"
/**
*jack_bauer - function that prints every minute of the day of Jack Bauer
*Return: time
*/
void jack_bauer(void)
{
	int hoursa;
	int hoursb;
	int minutesa;
	int minutesb;

	for (hoursa = 0; hoursa <= 2; hoursa++)
	{
		for (hoursb = 0; hoursb <= 3; hoursb++)
		{
		for (minutesa = 0; minutesa <= 5; minutesa++)
		{
			for (minutesb = 0; minutesb <= 9; minutesb++)
			{
				_putchar(hoursa + '0');
				_putchar(hoursb + '0');
				_putchar(58);
				_putchar(minutesa + '0');
				_putchar(minutesb + '0');
				_putchar('\n');

		}
		}
		}
		}
}
