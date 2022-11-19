#include "main.h"

/**
 * clear_bit - Short description.
 * @n: first member.
 * @index: second member.
 *
 * Return: Always.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

