#include "main.h"
/**
 * _isalpha - checks for uppercase char
 *Return: Return 1 and 0
 * @c: character to be evaluated
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		else if (c >= 97 && c <= 122)
		{
		return (1);
	}
	return (0);
}
