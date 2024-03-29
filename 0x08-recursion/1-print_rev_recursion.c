#include "main.h"

/**
 * _print_rev_recursion - function name
 * @s: pointer to char
 * Return: a string in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
