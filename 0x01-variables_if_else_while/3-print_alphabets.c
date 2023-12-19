#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	ch abc;

	for( abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(tolower(abc));
		putchar(toupper(abc));
	}
	putchar('\n');

	return (0);
}
