#include "main.h"

/**
  * flip_bits -  returns the number of bits you would need to flip to
  * get from one number to another
  * @n: is the size of the pointer
  * @m: a index
  * Return: Always 0.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;

	if (!(n == m))
	{
		while (!(n == m))
		{
			if (n == 0 && m == 0)
				break;

			if (!((n & 1) == (m & 1)))
				a += 1;
			n = n >> 1;
			m = m >> 1;
		}
	}
	return (a);
}
