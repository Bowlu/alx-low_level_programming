#include "main.h"
/**
 * more_numbers - function name for printing more numbers
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar((b / 10) + '0');
		}
		_putchar((a % 10) + '0');
		_putchar('\n');
	}
}
