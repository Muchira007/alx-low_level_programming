#include <unistd.h>

/**
 * _putchar - writes character c to out
 * @c: character to output
 *
 * Return: On Success 1.
 * On error, -1
 *
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}    
