#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n , lastd);
	}
	if (lastd == 0)
	{
		 printf("Last digit of %d is %d and is 0", n ,lastd);
	}
	if (lastd < 6 && != 0)
	{
		 printf("Last digit of %d is %d and is less than 6 and not 0" , n ,lastd);
	}
	printf("\n");

	return (0);
}
