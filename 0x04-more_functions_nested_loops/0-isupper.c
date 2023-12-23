/**
 * _isupper - checking for upper character
 * @c: character to check
 * Return: 0 / 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
