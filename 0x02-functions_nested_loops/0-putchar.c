#include "main.h"

/**
 * main - check the code
 *
 * Description: print string "_putchar"
 * using a while loop over the array
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
