/* C Runtime liberary header files */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single degit num follow by semi-colon and space
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
