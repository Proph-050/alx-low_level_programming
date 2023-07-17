#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Return Always 0 (Success)
 */
int main(void)
{
const int lowerCase = "a";
const int  upperCase = "A";

while  (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
while (upperCase <= 'z')
{
putchar(upperCase);
upperCase += 1;
}
putchar('\n');
return(0);
}
