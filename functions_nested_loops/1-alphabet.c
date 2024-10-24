/* user defined header files */
#include "main.h"

/**
 * print_alphabet - print to stdout
 *
 * Description: print_alphabet - print alphabet in lowercase to stdout
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
