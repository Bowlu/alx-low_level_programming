#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum
 * @n: parameter
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (a = 0; a < n; a++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
