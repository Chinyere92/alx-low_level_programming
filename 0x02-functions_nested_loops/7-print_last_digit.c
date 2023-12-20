#include <stdio.h>
/**
 * print_last_digit - last digit
 * @n: number
 * Return: last of n
 */
int print_last_digit(int n)
{
	int m = n % 10;

	printf("%d", m);
	return (m);
}
