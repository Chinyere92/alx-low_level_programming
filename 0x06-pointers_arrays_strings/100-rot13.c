/**
 * rot13 - stranlate char by 13 position
 * @s: string pointer
 * Return: string
 */
char *rot13(char *s)
{
	char *str = s;
	int x;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		x = 0;
		while (alpha[x])
		{
			if (*s == alpha[x])
			{
				*s = rot[x];
				break;
			}
			x++;
		}
		s++;
	}
	return (str);
}
