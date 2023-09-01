#include "main.h"

/**
 * clear_bit - clears the bit of the index
 * @n: pointer to the number to change
 * @index: of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 65)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
