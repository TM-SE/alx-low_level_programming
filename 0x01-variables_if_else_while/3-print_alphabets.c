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
	char upper;

	for( abc = 'a'; abc <= 'z'; abc++)
	{
		small = tolower(abc);
		upper = toupper(abc);
		putchar(small);
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
