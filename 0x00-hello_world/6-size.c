#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a char is: %lu byte(s)\n", sizeof(mychar));
	printf("The size of an int is: %lu byte(s)\n", sizeof(myInt));
	printf("The size of a long int is: %lu byte(s)\n", sizeof(mylongint));
	printf("The size of a long long int is: %lu byte(s)\n", sizeof(mylong longint));
	printf("The size of a float is: %lu byte(s)\n", sizeof(myfloat));
	return (0);
}
