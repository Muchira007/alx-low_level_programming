#include "main.h"
/**
 * _pow_recursion - returns raised to power
 *
 * @x: variable
 * @y: raise to the power level
 *
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	return (x * _pow_recursion(x, (y - 1)));

	return (0);
}
