#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int num;
	char letter;

	for(num = 0; num <= 9; num++)
	{
		for (letter= 'a'; letter <= 'f'; letter++)
		{
			putchar('0' + num);
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
