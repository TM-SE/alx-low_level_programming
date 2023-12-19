#include <stdio.h>
#include <type.h>
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
		putchar(small);
		upper= toupper(abc);
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
