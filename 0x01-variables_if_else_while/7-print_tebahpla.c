#include <stdio.h>

/**
 * main - Entry point of the code
 * description - All function eg putchar and returns is in the function
 * Return: Always return 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}