#include <stdio.h>
/**
 * main - main function
 * print {a_z}
 * Return: 0
 */
int main(void)
{
	char c;

	for  (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
