#include <stdio.h>
/**
 * main - starting point of other function
 * Return: 0 On successful
 */
int main(void)
{
	char *str = "_putchar";

	while (*str != '\0')
		putchar(*str++);
	putchar('\n');

	return (0);
}
