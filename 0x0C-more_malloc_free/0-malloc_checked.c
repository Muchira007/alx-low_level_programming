#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - creates a memory location
 *
 * @b: int size to allocate
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *P;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
