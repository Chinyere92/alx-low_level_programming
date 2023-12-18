#include <stdio.h>
/**
 * main - main function
 * usin write to print
 * Return: 1
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
	return (1);
}
