/* user defined header files */
#include "main.h"

/**
 * print_alphabet_10x - print to stdout
 *
 * Description: print_alphabet_x10 - print alphabet in lowercase x10 to stdout
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char letters;

	for (i = 0; i <= 9; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
