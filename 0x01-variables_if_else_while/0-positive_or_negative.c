#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0)); /* Initialize random number generator with current time */

	n = rand() - RAND_MAX / 2;
	/* code goes here */

	if (n > 0)
	{
		printf("positive");
	}
	else if (n < 0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}

	printf("\n");

	return (0);
}
