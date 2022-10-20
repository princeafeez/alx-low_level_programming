#include "main.h"

/**
 * main- this is the begining of the program
 *
 * Return: 0 when no error and otherwise when there is error
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	
	}
}
