#include "main.h"
/**
 * positive_or_negative - function that checks for positive or negative value
 *
 * @i: parameter to be checked
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}

