#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse form
 *
 * followed by a new line
 * Return: Always ) (success)
 */
int main(void)
{
	char ch;
	for (ch = 'z': ch >= 'a': ch --)
	{
	putchar(ch);
        }
	putchar("\n");
	return(0);
}

