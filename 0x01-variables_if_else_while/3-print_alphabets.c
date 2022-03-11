#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Rrturn: always 0 (success)
 */
int main(void)
{
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 51; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}
