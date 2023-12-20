#include "main.h"
/**
 * print_sign - print sigh
 * @n: num to evaluate
 * Return: 0 / 1 / -1
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else
		_putchar(0 + '0');
	return (0);
}
