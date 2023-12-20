#include "main.h"
/**
 * print_last_digit - last digit
 * @n: number
 * Return: last of n
 */
int print_last_digit(int n)
{
	int s;

	s = n % 10;
	if (s < 0)
		s = -s;
	_putchar(s + '0');
	return (s);
}
