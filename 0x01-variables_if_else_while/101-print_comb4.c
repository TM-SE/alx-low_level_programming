#include <stdio.h>
/**
*main - entry point
*Return: return (0)
*/
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 7; num1++)
	{
	for (num2 = 0; num2 <= 8; num2++)
	{
	for (num3 = 0; num3 <= 9; num3++)
	{
	if (num1 == num2 || num2 == num3 || num2 > num3 || num1 > num2)
	{
		continue;
	}
		putchar(num1 + '0');
		putchar(num2 + '0');
		putchar(num3 + '0');
	if (num1 != 7 || num2 != 8 || num3 != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
		putchar('\n');
	return (0);
}


