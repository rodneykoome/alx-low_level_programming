#include "main.h"

/**
 * print_triangle - a function that printa a triangle
 * @size:  is the size of the triangle
 *If size is 0 or less, the function should print only a new line
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	 int c, d;

	if (size <= 0)
		_putchar('\n');

	for (c = 0; c < size; ++c)
	{
		for (d = 0; d < size; ++d)
		{
			if (d >= (size - (c + 1)))
			_putchar('#');

			else
			_putchar(' ');
		}

	_putchar('\n');
	}
}
