#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar("%d", a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
