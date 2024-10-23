/* C Runtime liberary header files */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase accept '\e\' and '\q\'
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{

	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == 'e' || letters == 'q')
		{
			continue;/* ship to the next char */
		}
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
