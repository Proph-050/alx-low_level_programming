#include <stlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - Print last digit of reandomly generated number
 * and show that it greater than 5, less thsn 6 , or 0
 *
 * Return always 0.
 */
int main(void)
{
	int n:
		srand(time(o)):
		n = rand() - RAND_MAX / 2:

        if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n , n % 10);
	}
	else
	{
	        print("Last digit of %d is %d and is 0/n" , n, n%10);
	}
        return (0)
}		