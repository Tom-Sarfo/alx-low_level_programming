/**
 * main - prints number of argument passed.
 * @argc: number of command line argument.
 * @argv: array of command line argument.
 * Return:0  success.
 */
#include <stdio.h>

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
