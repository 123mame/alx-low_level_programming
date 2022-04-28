#include "main.h"

/**
  * get_endianness -  function that checks the endianness
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	int num = 258;
	char *con = (char *) &num;

	if (*(con + 2) > *(con + 3))
		return (0);
	return (1);
}
