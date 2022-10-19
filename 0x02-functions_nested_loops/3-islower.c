#include "main.h"
/**
 * _islower
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

