#include "main.h"

/**
 * get_endianness - it checks if machine is little or big endian
 * Return: 0 for Big, 1 for Little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *a = (char *) &j;

	return (*a);
}
