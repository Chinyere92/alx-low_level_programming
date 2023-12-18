#include <stdio.h>
/**
 * main - main function
 * print number in base 10 using putchar
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
			}
			if (i != 8 && i < j)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');

	return (0);
}
