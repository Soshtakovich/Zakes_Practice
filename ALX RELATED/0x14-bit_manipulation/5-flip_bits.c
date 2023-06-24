#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: First number to compare
 * @m: Second number to compare
 * Return: the number of bits you would need to flip to get
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output;
	unsigned long int i;

	output = n ^ m;
	for (i = 0; output > 0;)
	{
		if ((output & 1) == 1)
			i++;
		output = output >> 1;
	}

	return (i);
}
