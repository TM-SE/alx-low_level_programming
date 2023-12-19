#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main (void)
{
	char abc;

	for (abc = 'z'; abc <= 'a'; abc--)
	{
		putchar(abc);
	}
	putchar('\n');

	return (0);
}
