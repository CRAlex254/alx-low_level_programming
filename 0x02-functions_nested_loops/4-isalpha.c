#include "main.h"
/**
 * _isalpha - function that cecks for alphabetic character
 *
 * @c: parameter to be printed
 *
 * Return: 1 if is a letter
 * 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
