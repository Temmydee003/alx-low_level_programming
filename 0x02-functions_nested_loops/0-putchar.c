#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	char cstring[10] = "_putchar\n";


	while (c < 10)
	{
		_putchar(cstring[c]);
		c++;
	}
	return 0;
}
