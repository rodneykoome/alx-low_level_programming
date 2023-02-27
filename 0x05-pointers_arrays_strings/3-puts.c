#include "main.h"

/**
 * _puts - a function that prints a sring followed by a new line.
 * @str: the string to be  printed
 * Return the string
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
