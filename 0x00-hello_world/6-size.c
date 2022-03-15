#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0
 **/

int main(void)
{
	char charType;
	int intType;
	int longintType;
	double doubleType;
	float floatType;

	/** sizeof evaluates the size of a variable**/

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
