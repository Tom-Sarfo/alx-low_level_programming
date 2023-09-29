/**
 * get_bit - return the value of index
 * @n: integer
 * @index: index of value to be return
 * Return: value at a given index, -1 if failure
 * Description: return the value of bit at a given index
 */
#include "main.h"

#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter;

	if (n == 0 && index < 64)
		return (0);

	for (counter = 0; counter <= 63; n >>= 1, counter++)
	{
		if (index == counter)
		{
			return (n & 1);
		}
	}

	return (-1);
}
