#include "main.h"

/**
 * _pow_recursion - return x raised to the power of y
 * @x: input integer
 * @y: power integer
 *
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1);
}
