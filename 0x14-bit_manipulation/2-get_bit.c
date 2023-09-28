#include "main.h"

/**
 * get_bit - it returns the value of bit at an index in a decimal number
 * @p: the number to search
 * @index: the index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int p, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (p >> index) & 1;

	return (bit_val);
}
