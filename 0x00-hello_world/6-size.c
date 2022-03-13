#include <stdio.h>

/**
 * main- Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int myInt;
	double mydouble;
	float myfloat;
	char mychar;

	printf("The size of an int is: %lu.\n", sizeof(myInt));
	printf("The size of an double is: %lu.\n", sizeof(mydouble));
	printf("The size of a float is: %lu.\n", sizeof(myfloat));
	printf("The size of a char is: %lu.\n", sizeof(mychar));
	return(0);
}
