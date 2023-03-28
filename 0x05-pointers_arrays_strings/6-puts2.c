#include "main.h"

/**
 * puts2 - prints one character out of 2 of a string.
 * then followed by a new line
 * @str: string from where to print the characters
 */

void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0 ; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
