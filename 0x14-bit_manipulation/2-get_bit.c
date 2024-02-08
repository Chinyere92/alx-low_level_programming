/**
 * get_bit - Gets the value
 * @n: The number to bit.
 * @index: the bit to retrieve.
 * Return: The value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) != 0);
}
