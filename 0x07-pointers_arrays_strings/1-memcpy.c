#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: receives memory
 * @src: source of the memory
 * @n: integer
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
