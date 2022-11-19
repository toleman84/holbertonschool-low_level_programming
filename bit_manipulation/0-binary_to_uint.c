#include "main.h"

/**
 * binary_to_uint - Short description.
 * @b: first member.
 *
 * Return: val.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, val = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
		{
			val += base;
		}
		base *= 2;
		len--;
	}
	return (val);
}

