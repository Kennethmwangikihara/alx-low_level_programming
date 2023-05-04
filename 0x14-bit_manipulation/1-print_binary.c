#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @k: decimal number to print as binary
 */

void print_binary(unsigned long int k)
{
	unsigned long int temp;
	int shifts;

	if (k == 0)
	{
		printf("0");
		return;
	}

	for (temp = k, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((k >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
