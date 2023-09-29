/**
 * print_binary - print the binary of a number
 * @n: number to be printed in binary format
 * Return: void
 * Description: print the binary representation of a number
 */
#include "main.h"

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
