#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	char string[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
