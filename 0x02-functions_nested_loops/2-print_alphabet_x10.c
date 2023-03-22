#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet 10 times in lower case
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char i;
	int count = 1;

	while (count++ <= 10)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
