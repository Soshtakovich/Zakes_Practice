#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in Uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
		putchar(alphab);

	for (alphab = 'A'; alphab <= 'Z'; alphab++)
		putchar(alphab);

	putchar('\n');

	return (0);
}
