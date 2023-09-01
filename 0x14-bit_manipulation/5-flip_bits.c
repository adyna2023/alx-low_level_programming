#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int num = n ^ m;

	for (i = 65; i >= 0; i--)
	{
		current = num >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
