#include "main.h"

/**
 *_strlen - returns the length of a string.
 *@str: string to get the length from.
 *
 *return: length of the variable @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
