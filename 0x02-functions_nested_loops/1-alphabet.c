#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Description: print lowercase alphabet from a - z
 * using a fpr loop
 * Return: Always 1.
 */
print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return 1;
}
