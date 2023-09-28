#include "main.h"

/**
 * binary_to_uint - this converts  bin number to unsigned int
 * @e: str that contain binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *e)
{
	int j;
	unsigned int dec_val = 0;

	if (!e)
		return (0);

	for (j = 0; e[j]; j++)
	{
		if (e[j] < '0' || e[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (e[j] - '0');
	}

	return (dec_val);
}
