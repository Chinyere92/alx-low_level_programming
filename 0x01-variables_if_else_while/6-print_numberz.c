#include <stdio.h>
/**
 * main - main function
 * print number in base 10 using putchar
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}
