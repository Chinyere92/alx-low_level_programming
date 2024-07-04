/**
 * leet - Changing Character to number
 * @s: String point to
 * Return: New look of S
 */
char *leet(char *s)
{
	int lop;
	char *o = s;
	char lookup[] = {'a', 'e', 'o', 't', 'l'};
	char replace[] = {'4', '3', '0', '7', '1'};

	while (*s != '\0')
	{
		lop = 0;
		while (lookup[lop] != '\0')
		{
			if (*s == lookup[lop] || *s == (lookup[lop] - 32))
			{
				*s = replace[lop];
				break;
			}
			lop++;
		}
		s++;
	}
	return (o);
}
