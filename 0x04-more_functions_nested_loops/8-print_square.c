#include "main.h"

/**
 * print_square- a function that printa s square
 * @size:  is the size of the square
 *If size is 0 or less, the function should print only a new line
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int c, d;

	if (size <= 0)
		_putchar('\n');

	for (c = 0; c < size; ++c)
	{
		for (d = 0; d < size; ++d)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
