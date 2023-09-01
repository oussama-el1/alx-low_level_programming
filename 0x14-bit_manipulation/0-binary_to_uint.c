#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary
 * @b: char string
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t;
	unsigned int power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, t = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			t += power;
	}

	return (t);
}
