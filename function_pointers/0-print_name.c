#include "function_pointers.h"

/**
 * print_name - Short description.
 *
 * @name: first member.
 * @f: second member.
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

