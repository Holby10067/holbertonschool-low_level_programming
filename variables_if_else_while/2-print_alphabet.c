/* C Runtime liberary header files */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
