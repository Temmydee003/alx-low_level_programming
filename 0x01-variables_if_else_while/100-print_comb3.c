#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = a + b; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);

			if (b < '9' != a < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
