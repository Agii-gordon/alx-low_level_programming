#include "main.h"

/**
 * flip_bits - it counts the number of bits to change
 * to get from one number to another
 * @p: the first number
 * @d: the second number
 *
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int p, unsigned long int d)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = p ^ d;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
