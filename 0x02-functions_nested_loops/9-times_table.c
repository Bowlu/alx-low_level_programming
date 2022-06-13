#include "main.h"
/**
 * times_table - function name
 *
 * Return: 0
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			a = b * c;
			if (b == 0)
				_putchar(a + '0');
			if (b != 0 && a <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else if (a >= 9)
			{
				_putchar(' ');
				_putchar((a / 9) + '0');
				_putchar((a % 9) + '0');
			}
		}
		_putchar('\n');
	}
}
