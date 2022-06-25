#include <stdio.h>

/**
 * main - function that prints the number of arguments passed to it
 * @argc: argument count
 * @argv: an array of the argument
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc -1);
}
