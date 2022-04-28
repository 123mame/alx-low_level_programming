#include "main.h"

/**
  * binary_to_uint - function that converts a binary number
  * @b: is the size of the pointer
  * Return: converted number or 0 if ...
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c, d, num = 0, ben = 1;

	if (b != NULL)
	{
		for (c = 0; b[c] != '\0'; c++)
			if (b[c] != 0 + '0' && b[c] != 1 + '0')
				return (0);
		for (d = 0; d < c; d++)
		{
			num += (b[(c - 1) - d] - '0') * ben;
			ben *= 2;
		}
		return (num);
	}
	return (0);
}
