#include  "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @g:guess at sqrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 *
 */

int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - a function that returns the natural sqrt of a number
 * If n does not have a natural square root, the function should return -1
 * @n: num
 *Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	return (sqrt_check(1, n));
}
