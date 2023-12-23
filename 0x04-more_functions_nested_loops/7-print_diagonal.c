#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: amount of times to print
 * Return: void function
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			if (y == x)
				_putchar('\\');
			else
				_putchar(' ');
		}

	}
}
