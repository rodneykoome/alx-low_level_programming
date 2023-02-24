#include <stdio.h>
#include <stdlib.h>

/**
 * main - code prints 1-100 for n/3fizz &&n/5 buzz && n/3 and 5 fizzbuzz
 *
 * Return: void
 */

int main(void)
{
	int c;

	for (c  = 1; c < 101; ++c)
	{
		if (c % 15 == 0)
		printf("FizzBuzz");

		else if (c % 5 == 0)
		printf("Buzz");

		else if (c % 3 == 0)
		printf("Fizz");

		else
		printf("%d", c);

		if (c < 100)
		printf(" ");
	}
	printf("\n");

return (0);
}
