#include "main.h"
/**
 * print_diagonal - function name for drawing a diagonal line
 * @n: number of times '\' should be printed
 *
 */
void print_diagonal(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
