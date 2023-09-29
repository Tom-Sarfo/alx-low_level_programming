/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: pointer to string param
 * Return: converted number, 0 or NULL
 * Description: convert a binary number to an unsigned int
 */
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int binary_len = strlen(b);
	int index;
	int i;
	unsigned int result = 0;

	for (i = 0, index = binary_len - 1; index >= 0; index--, i++)
	{
		if (b == NULL)
		{
			return (0);
		}
		else if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			result += (1 << index);
		}
	}
	return (result);
}
