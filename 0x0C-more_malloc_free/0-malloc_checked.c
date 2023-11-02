#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - creates a memory location
 *
 * @b: int size to allocate
 * @p: pointer 
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	
	return (p);
}
