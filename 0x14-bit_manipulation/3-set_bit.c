#include "main.h"

/**
 * set_bit - It sets bit at given index to 1
 * @p: the pointer to the number to change
 * @index: the index of the bit to set to 1
 *
 * Return: 1 for Success, -1 for Failure
 */
int set_bit(unsigned long int *p, unsigned int index)
{
	if (index > 63)
		return (-1);

	*p = ((1UL << index) | *p);
	return (1);
}
