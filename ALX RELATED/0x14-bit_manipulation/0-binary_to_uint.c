#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int itr, Base_2;

	if (!b)
		return (0);

	ui = 0;

	for (itr = 0; b[itr] != '\0'; itr++)
		;

	for (itr--, Base_2 = 1; itr >= 0; itr--, Base_2 *= 2)
	{
		if (b[itr] != '0' && b[itr] != '1')
		{
			return (0);
		}

		if (b[itr] & 1)
		{
			ui += Base_2;
		}
	}

	return (ui);
}
