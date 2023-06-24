#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		if (alphab != 'e' && alphab != 'q')
			putchar(alphab);
	}

	putchar('\n');

	return (0);
}
