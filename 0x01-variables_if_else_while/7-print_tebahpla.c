#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * return: Always 0 (Success)
 */
int main(void)
{
	char letter[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i <= 51; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}
