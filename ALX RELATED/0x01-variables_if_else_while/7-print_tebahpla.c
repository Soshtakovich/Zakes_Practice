#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
		putchar(alphab);

	putchar('\n');

	return (0);
}
