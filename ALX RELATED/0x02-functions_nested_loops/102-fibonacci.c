#include "main.h"
#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long t1 = 0, t2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = t1 + t2;
		printf("%lu", sum);

		t1 = t2;
		t2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
