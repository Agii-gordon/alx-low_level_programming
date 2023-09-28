#include "main.h"

/**
 * print_binary - it prints binary equivalent of decimal number
 * @p: the number to print in bin
 */
void print_binary(unsigned long int p)
{
	int j, count = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = p >> j;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
