#include "main.h"

/**
 * get_size - finds the size to cast the argument
 * @format: Formatted string to print the arguments
 * @i: arguments to be printed.
 * Return: size.
 */

int get_size(const char *format, int *i)
{
	int cu_i = *i + 1;
	int size = 0;

	if (format[cu_i] == 'l')
		size = S_LONG;
	else if (format[cu_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = cu_i - 1;
	else
		*i = cu_i;

	return (size);
}
