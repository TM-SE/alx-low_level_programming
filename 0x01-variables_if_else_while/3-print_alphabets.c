#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char abc;
	char small;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		small = tolower(abc);
		putchar(small);
	}
	for (abc = 'A'; abc <= 'Z'; abc++)
	{
		putchar(abc);
	}
	putchar('\n');

	return (0);
}
