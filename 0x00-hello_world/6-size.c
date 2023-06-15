#include <stdio.h>

/**
 * main - the necessary function
 *
 * printf - printing on screen
 *
 * Return: return zero
 */


int main(void)
{
	char chrt;
	int integ;
	long lng;
	long long dbllng;
	float flt;

	printf("Size of a char: %lu byte(s)\n", sizeof(chrt));
        printf("Size of an int: %lu byte(s)\n", sizeof(integ));
        printf("Size of a long int: %lu byte(s)\n", sizeof(lng));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(dbllng));
        printf("Size of a float: %lu byte(s)\n", sizeof(flt));

	return (0);
}
