#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase
 *
 * Return: prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char letter;
	int x = 0;

	while (x++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

		_putchar('\n');
	}
}
