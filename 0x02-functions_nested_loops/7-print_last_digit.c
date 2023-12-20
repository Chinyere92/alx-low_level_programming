#include <stdio.h>
/**
 * print_last_digit - last digit
 * @n: number
 * Return: last of n
 */
int print_last_digit(int n)
{
	int m = n % 10;

	putchar(m + '0');
	return (m);
}
