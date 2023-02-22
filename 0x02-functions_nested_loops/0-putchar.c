#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
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
