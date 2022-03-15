#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 */
void print_alphabet(void)
{
	char b;

	b = 97;
	while (b <= 122)
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
