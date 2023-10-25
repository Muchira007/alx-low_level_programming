#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of the number
 *
 * @n: parameter
 * @i: iterator
 *
 * Return: value
 */
int _sqrt_recursion(int n, int i)
{
	if (i < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square roo
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (n);
	return (actual_sqrt_recursion(n, i + 1));
}
