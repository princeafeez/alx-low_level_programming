#include "main.h"

/**
 * print_alphabet_x10- is the starting point of the program
 *
 * return: 0 if no error and otherwise when there is error
 */

void print_alphabet_x10(void)
{
int count;
char ch;
count = 0;


	while (count++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			_putchar('\n');
		}
	}
}

