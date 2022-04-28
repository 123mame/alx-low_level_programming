#include "main.h"

/**
  * set_bit - function that sets the value of a bit to 1 at a given index
  * @n: is the size of the pointer
  * @index: a index
  * Return: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (!(*n & (1 << index)))
		*n += 1 << index;
	return (1);
}
