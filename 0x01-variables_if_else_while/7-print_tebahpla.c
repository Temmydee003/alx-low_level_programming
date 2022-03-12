#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i <= 24; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}
