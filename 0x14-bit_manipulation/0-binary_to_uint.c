#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conv;

	if (b)
	{
		for (i = 0; b[i]; i++)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);

			else
			{
				conv += (b[i] - '0') * 2 ^ i;
			}
		}
		return (conv);
	}
	return (0);
}
