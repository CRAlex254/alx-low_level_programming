#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string followed by a new line
 * @str: points to the string being printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar ('\n');
}	
