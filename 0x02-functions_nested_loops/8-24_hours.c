#include "main.h"
/**
 * jack_bauer - baure
 * Return: nothing
 */
void jack_bauer(void)
{
	int a, y;

	for (a = 0; a < 24; a++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
