#include <stdio.h>
#include <unistd.h>
/**
*main - Entry point
*function - write()
*Return: 1
*/
int main(void)
{
	int sen;

sen = write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (sen);
}
