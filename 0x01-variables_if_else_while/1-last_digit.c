#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, r;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	r = a % 10;
	printf("Last digit of %d is: ", a);
	if (r > 5)
	{
		printf("%d and is greaterthan 5\n", r);
	}
	else
	{
		if (r < 6 && r != 0)
		{
			printf("%d and is less than 6 and not 0\n", r);
		}
		else
		{
			printf("%d and is 0\n", r);
		}
	}
	return (0);
}
