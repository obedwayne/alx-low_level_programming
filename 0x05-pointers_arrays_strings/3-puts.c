#include "main.h"

/**
 *_put - that prints a string, followed by a new line, to stdout.
 *@str: the string to be printed out.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
