#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
		putchar(alphab);

	putchar('\n');

	return (0);
}
