#include "hash_tables.h"

/**
 * hash_djb2 - generates random number given a string
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int c;

	hsh = 5381;
	while ((c = *str++))
	{
		hsh = ((hsh << 5) + hsh) + c;
	}
	return (hsh);
}
