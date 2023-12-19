#include "main.h"
/**
 * main- entry point
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

	return (0);
}
