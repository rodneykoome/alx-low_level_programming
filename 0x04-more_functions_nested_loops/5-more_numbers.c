#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int c, d, e;

	for (c = 0; c < 10; ++c)
	{
		for (d = 0, e = 0; d < 15; ++d, ++e)
		{
			if (d > 9)
			{
				_putchar('1');
			}
			if (d > 9)
			{
				e = d % 10;
			}
			_putchar(e + '0');
		}
		_putchar('\n');
	}
}
