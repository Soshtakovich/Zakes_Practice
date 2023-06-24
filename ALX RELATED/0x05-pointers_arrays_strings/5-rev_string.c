#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int lenstr = 0, index = 0;
	char tmp;

	while (s[index++])
		lenstr++;

	for (index = lenstr - 1; index >= lenstr / 2; index--)
	{
		tmp = s[index];
		s[index] = s[lenstr - index - 1];
		s[lenstr - index - 1] = tmp;
	}
}
