#include <stdio.h>

/**
 * main- Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mychar;
	int myInt;
	long int mylongint;
	long long int mylong_int;
	float myfloat;

	printf("The size of a char is: %lu.\n", sizeof(mychar));
	printf("The size of an int is: %lu.\n", sizeof(myInt));
	printf("The size of a long int is: %lu.\n", sizeof(mylongint));
	printf("The size of a long long int is: %lu.\n", sizeof(mylong_int));
	printf("The size of a float is: %lu.\n", sizeof(myfloat));
	return (0);
}
