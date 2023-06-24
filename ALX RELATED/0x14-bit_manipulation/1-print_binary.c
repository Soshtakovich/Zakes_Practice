#include "main.h"

/**
 * print_binary - prints binary number
 * @n: uint t be converted to binary
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	long int num = n;
	int j, i, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		num = n >> i;
		j = (num) & 1;
		if (j || flag)
		{
			if (j)
				_putchar('1');
			else
				_putchar('0');
			flag = 1;
		}

	}
}
