#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * return: always 0 (success)
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
