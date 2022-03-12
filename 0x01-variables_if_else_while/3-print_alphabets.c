#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 (Success)
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
