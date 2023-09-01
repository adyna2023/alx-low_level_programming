#include "main.h"

/**
 * set_bit - sets a bit at a given index
 * @n: pointer to the number to change
 * @index: the bit to set
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 65)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
