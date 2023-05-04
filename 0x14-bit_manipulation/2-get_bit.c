#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the value of a bit at a given index.
 * @l:number to evaluate.
 * @index:index starting from 0 of the bit we want to get.
 * Return:Value of bit at index or -1 if error.
 */

int get_bit(unsigned long int l, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = l >> index;

	return (hold & 1);
}
