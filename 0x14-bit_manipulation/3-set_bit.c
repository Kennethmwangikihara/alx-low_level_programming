#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index.
 * @m:decimal number passed by pointer.
 * @index:index position to change..starting from 0.
 * Return: 1 if it worked..-1 if error
 */

int set_bit(unsigned long int *m, unsigned int index)
{
	unsigned long int b;

	if (index > 64)
		return (-1);

	for (b = 1; index > 0; index--, b *= 2)
		;
	*m += b;

	return (1);
}
