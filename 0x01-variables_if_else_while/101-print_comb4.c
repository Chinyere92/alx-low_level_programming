#include <stdio.h>
/**
 * main - main function
 * print number in base 10 using putchar
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k < 9; k++)
			{
				if (i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
				}
				if (i != 8 && i < j && j < k)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
