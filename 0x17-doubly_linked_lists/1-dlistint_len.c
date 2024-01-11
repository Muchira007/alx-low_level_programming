#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * Return: - numbers of elements
 * @h: the head pointer
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int i;

	if (h == NULL)
		return (0);

	temp = h;
	i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
