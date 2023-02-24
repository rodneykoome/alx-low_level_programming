#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the length of the diagonal line, so number of lines down
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');

	for (c = 0; c < n; ++c)
	{
		for (d = 0; d < c; ++d)
		{
			_putchar(' ');
		}
			_putchar('\\');

	_putchar('\n');
	}
}
