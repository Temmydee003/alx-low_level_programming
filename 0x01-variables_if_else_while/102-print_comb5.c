#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: return all combination of 0 to 99
 * Return: 0
 */
int main(void)
{
	int a, b, d1, d2, d3, d4;

	for (a = 0; b <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			d1 = a / 10;
			d2 = a % 10;
			putchar(d1 + '0');
			putchar(d2 + '0');
			putchar(' ');
			d3 = b / 10;
			d4 = b % 10;
			putchar(d3 + '0');
			putchar(d4 + '0');
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
