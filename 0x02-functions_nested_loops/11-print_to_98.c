#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function name
 * @n: parameter
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n);
			n = n + 1;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n);
			n = n - 1;
		}
	}
}
