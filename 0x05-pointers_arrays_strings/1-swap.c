#include "main.h"

/**
 * swap_int - function that swaps integers.
 * @c: parameter to hold the value of a.
 * @a: value 1
 * @b: value 2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
