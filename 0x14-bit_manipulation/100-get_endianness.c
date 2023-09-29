/**
 * get_endianness - check endianness
 * 
 * Return: 0 if endian is big, 1 if little
 * Description: check the endianness
 */
#include "main.h"

int get_endianness(void)
{
	int i;

	char *c;

	i = 1;

	c = (char *)&i;

	return (*c);
}
