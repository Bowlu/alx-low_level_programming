#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: o
 */
int main(void)
{
	int a;
	unsigned long int b, c, num, sum;

	b = 1;
	c = 2;
	sum = 0;
	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		num = b + c;
		b = c;
		c = num;
	}
	printf("%lu\n", sum);
	return (0);
}
