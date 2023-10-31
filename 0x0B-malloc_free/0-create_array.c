#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int;

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
