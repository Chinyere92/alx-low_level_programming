#include <string.h>
/**
 * _strcat - concat string
 * @dest: to put
 * @src: from
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);

	while (*src != '\0')
	{
		dest[len] = *src;
		len += 1;
		src++;
	}
	dest[len] = '\0';
	return (dest);
}
