#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the necessary function
 *
 * Return: return zero always
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;

	if (num == 0)
		printf("%d is zero\n", num);
	else if (num < 0)
		printf("%d is negative\n", num);
	else
		printf("%d is positive\n", num);

	return (0);
}
