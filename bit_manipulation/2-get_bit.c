#include "main.h"

/**
 * get_bit - Short description.
 * @n: first member.
 * @index: second member.
 *
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);

}

