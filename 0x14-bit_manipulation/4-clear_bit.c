#include "main.h"

/**
 * clear_bit - it sets the value of a given bit to 0
 * @p: the pointer to the number to change
 * @index: the index of the bit to clear
 *
 * Return: 1 for Success, -1 for Failure
 */
int clear_bit(unsigned long int *p, unsigned int index)
{
	if (index > 63)
		return (-1);

	*p = (~(1UL << index) & *p);
	return (1);
}
