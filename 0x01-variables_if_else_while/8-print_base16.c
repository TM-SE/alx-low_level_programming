#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int num;
	char hex[] = "0123456789abcdef";

	for (num = 0; num < 16; num++)
	{
		putchar(hex[num]);
	}
	putchar('\n');

	return (0);
}
