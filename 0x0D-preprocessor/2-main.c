 #include <stdio.h>

/**
 * main - prints the name of the file using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *filename = __FILE__;
	int i = 0;

	while (filename[i] != '\0')
	{
		putchar(filename[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
