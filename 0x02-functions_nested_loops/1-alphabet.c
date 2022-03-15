#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return 0;
}
