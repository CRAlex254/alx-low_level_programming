#include "main.h"

/**
 * _abs - function that prints the absolute value of an integer.
 *
 * @a: parameter to be printed.
 *
 * Return: Absolute value of the number or zero
 */

int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;

		return (abs_val);
	}

	return (a);
}
