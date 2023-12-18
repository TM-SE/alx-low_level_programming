#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * MAIN - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	if (n == 0)
	{
		printf("%d is zero", n);
	}
	if (n < 0)
	{
		printf("%d is negative", n);
	}
		printf("\n");
	return (0);
}
