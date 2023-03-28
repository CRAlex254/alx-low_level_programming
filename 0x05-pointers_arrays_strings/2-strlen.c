#include "main.h"

/**
 * _strlen - function that returns lenghs of a string.
 * @s: string whose lengh is to be printed
 * Return: lengh of string or the count
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
