#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * Return: number of nodes
 * @h: head pointer
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int i;

	if (h == NULL)
		return (0);

	temp = h;
	i = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
