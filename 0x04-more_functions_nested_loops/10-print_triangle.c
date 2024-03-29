#include "main.h"
/**
 * print_triangle - print triangle
 * @size: nth times to print triangle or shape
 * Return: void function
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= size - x)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
