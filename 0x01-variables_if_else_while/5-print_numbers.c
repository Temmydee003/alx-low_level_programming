#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * return: always 0 (success)
 */
int main(void)
{
	int a=0;
	while(a<10)
	{
		printf("%d", a);
		a=a+1;
	}
	putchar('\n');
	return (0);
}
