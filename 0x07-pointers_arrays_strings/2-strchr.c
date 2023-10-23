#include "main.h"
/*
 * @*_strchr -entry point
 * char *s adress input
 * char c - string input
 * &s point to adress of S
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c);
{
	int i = 0;

	for (; s[i] >= '0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
