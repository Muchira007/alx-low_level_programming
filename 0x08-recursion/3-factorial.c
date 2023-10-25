#include "main.h"
/**
 * factorial - illutrates precursion
 *
 * @n: place_value
 *
 * Return: Factorial value
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
