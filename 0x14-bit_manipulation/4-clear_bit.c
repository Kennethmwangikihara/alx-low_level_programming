#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set value of a bit to 0 at the given index.
 * @w:pointer to decimal number to change..
 * @index:index position to change.
 * Return: 1 if it worked.. -1 if error.
 */

int clear_bit(unsigned long int *w, unsigned int index)
{
	unsigned long int x;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (x = 1; hold > 0; x *= 2, hold--)
		;

	if ((*w >> index) & 1)
		*w -= x;

	return (1);
}
