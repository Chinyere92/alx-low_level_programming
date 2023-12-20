/**
 *  _isalpha - checking for lower leter
 *  @c: letter to check
 *  Return: true / false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
