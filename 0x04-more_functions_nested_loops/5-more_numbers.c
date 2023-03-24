#include "main.h"

/**
 * more_numbers - prints 10 times the number
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int a;
	int i;

	for (a = 0 ; a <= 10 ; a++)
	{
		for (i = 0 ; i <= 14 ; i++)
			_putchar(i);
		_putchar('\n');
	}
}

