#include "main.h"
#include <stdio.h>

#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long t1 = 0, t2 = 1, tsum;
	float sum;

	while (1)
	{
		tsum = t1 + t2;
		if (tsum > 4000000)
			break;

		if ((tsum % 2) == 0)
			sum += tsum;

		t1 = t2;
		t2 = tsum;
	}
	printf("%.0f\n", sum);

	return (0);
}
