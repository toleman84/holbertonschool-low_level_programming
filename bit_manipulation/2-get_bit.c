#include "main.h"

/**
 * get_bit - Short description.
 * @n: first member.
 * @index: second member.
 *
 * Return: -1 if an error ocurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

