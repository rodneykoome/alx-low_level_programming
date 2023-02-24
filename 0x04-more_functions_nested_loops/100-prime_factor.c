#include <stdio.h>
#include <stdlib.h>

/**
 * main - print largest prime factor of a fixed number
 *
 * Return: Always 0.
 */
int main(void)
{
	long c, num;

	num = 612852475143;

	for (c  = 3; c < num; c += 2)
	{
	if (num % c == 0)
	{
	num /= c;
	}
}
	printf("%ld\n", num);

return (0);
}
