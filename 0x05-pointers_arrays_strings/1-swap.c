#include "main.h"

/**
 *swap_int - Swaps values of two integers.
 *@a: This is the first integer to be swapped.
 *@b: This the 2nd integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int val = *a;
	*a = *b;
	*b = val;
}
