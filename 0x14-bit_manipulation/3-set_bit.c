/**
 * set_bit - set the value of a bit
 * @n: pointer to the value
 * @index: index starting from 0.
 *
 * Return: 1 if success, -1 if failure
 * Description: set the value of a bit to 1 at a given index
 */
#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = (*n | num);

	return (1);
}
