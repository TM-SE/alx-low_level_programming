#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');

}
