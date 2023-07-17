#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty stlye doc for function main  comes here */
/**
 * main - Print last digit of reandomly generated number
 * and show that it greater than 5, less thsn 6 , or 0
 *
 * Return Always 0 (success)
 */

int main(void)
{
int n;
int lastnum;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastnum = n % 10;
 if (lastnum  >  5)
{
printf("last digit of %d is %d and is greater than 5\n", n ,lastnum);
}
else if ( lastnum  < 6 && lastnum  != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n , lastnum);
}
else if ( lastnum == 0)
{
printf("Last digit of %d is %d and is 0/n" , n, lastnum);
}
return (0);
}		
