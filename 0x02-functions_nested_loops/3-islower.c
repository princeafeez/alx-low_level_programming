#include "main.h"
/**
 * _islower- checks if an alphabet is in lower case
 * @c: charater to be checked
 *
 * Return: 1 if c is lower case and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

