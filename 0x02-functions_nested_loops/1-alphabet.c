#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Description: print lowercase alphabet from a - z
 * using a for loop.
 * Retur: always 1.
 */
void print_alphabet(void)
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
