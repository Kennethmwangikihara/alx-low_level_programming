#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number.
 * @o:first number.
 * @p:second number to convert.
 * Return: number of bits that was needed to flip.
 */

unsigned int flip_bits(unsigned long int o, unsigned long int p)
{
	unsigned long int diff;
	int counter;

	diff = o ^ p;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
