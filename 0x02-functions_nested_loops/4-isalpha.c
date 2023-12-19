#include "main.h"
/**
 * _isalpha - checks for uppercase char
 *
 * @c: character to be evaluated
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		if (c >= 'a' && c <= 'z')
		{
		return (1);
	}
	}
	else
	{
	return (0);
	}
}
