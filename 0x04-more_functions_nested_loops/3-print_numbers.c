#include "main.h"

/**
 * print_numbers - function that prints numbers, from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
		printf((num % 10) + '0');

	_putchar('\n');
}
