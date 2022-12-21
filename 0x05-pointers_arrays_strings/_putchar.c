#include "main.h"
#include <unistd.h>

/**
 *_putchar - write the character c to stdout.
 *@c: the character to be printed.
 *
 *Return: 1 if successful.
 *on error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
