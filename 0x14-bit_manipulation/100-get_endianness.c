#include "main.h"

/**
 * get_endianness - ch
 * Return: ittle endian
 */
int get_endianness(void)
{
	int num;

	num = 1;

	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}

