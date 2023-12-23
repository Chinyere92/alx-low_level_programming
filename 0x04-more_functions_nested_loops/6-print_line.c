#include "main.h"
/**
 * print_line - print line
 * @n: nth time to print line
 * Return: void funct
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
