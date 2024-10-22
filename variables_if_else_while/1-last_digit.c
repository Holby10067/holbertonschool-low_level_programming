/* C Runtime liberary header files */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This Program check the value of the var
 * and print out the last digit.
 *
 * Return: Always 0 (Sucess)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;

	if (l_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	}
	else if (l_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
	}

	return (0);
}
