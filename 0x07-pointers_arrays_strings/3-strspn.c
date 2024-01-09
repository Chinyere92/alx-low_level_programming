#include <stdio.h>
#include <string.h>
/**
 * _strspn - how many samme letter found in each other
 * @s: string to search
 * @accept: used to compare string
 * Return: number of cha found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count  = 0;

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}
