#include <stdio.h>
/**
 * main- Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	printf("Size of char in c = %2d bytes \n", sizeof(char));
	printf("Size of int in c = %2d bytes \n", sizeof(int));
	printf("Size of long int in c = %2d bytes \n", sizeof(long int));
	printf("Size of long long int in c = %2d bytes \n", sizeof(long long int));
	printf("Size of float in c = %2d bytes \n", sizeof(float));
	return (0);
}
