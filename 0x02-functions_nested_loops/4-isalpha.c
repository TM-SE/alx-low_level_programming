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
		return (1);
	}
	return (0);
}
