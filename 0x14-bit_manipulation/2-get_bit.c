#include "main.h"

/**
 * get_bit - returns the value of a bit at the index
 * * @n: number to index
 * @index: index of the bit
 *
 * Return: value of the bit
 * or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 65)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
