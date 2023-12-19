#include "main.h"
/**
 * print_alphabet_x10 - prints abc 10 times
 *
 * Return: return
 */
void print_alphabet_x10(void)
{
	int times;
	char abc;

	for( times = 0; times <= 9; times++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
