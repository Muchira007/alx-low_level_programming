#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node at the beginning
 * Return: address of new element, NULL if fails
 * @head: head node
 * @n: data
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		printf("error during malloc");
		return (NULL);
	}

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
