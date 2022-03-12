#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		purchar(i);
	}
	putchar('\n');
	return (0);
}
