/* C Runtime liberary header files */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int num_hex;

	for (num_hex = 0 ; num_hex < 10; num_hex++)
	{
		putchar('0' + num_hex);
	}
	for (num_hex = 'a'; num_hex <= 'f'; num_hex++)
	{
		putchar(num_hex);
	}
	putchar('\n');

	return (0);
}
