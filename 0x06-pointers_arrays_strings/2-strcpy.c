#include "main.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: destination
 * @src: source
 * @n: number of strings
 * Return: destination of string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
