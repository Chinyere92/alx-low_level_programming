#include <stdio.h>

/**
 * main - entry point
 *
 *Return: 0 (Sucess)
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i < sizeof(c); i = i + 1)
	{
		putchar (c[i]);
	}

	putchar ('\n');
	return (0);
}
