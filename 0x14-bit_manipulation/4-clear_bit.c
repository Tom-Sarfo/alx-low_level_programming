/**
 * clear_bit - set value of a bit
 * @n: pointer to the value
 * @index: is the index of the value
 *
 * Return: 1 if success, -1 if failure
 * Description: set the value of a bit to 0 at a given index
 */
#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;

	if (*n & num)
		*n ^= num;

	return (1);
}
