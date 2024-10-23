/* C Runtime liberary header files */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet all lowercase in reverse z to a.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char letters;

	for (letters = 'z' ; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
