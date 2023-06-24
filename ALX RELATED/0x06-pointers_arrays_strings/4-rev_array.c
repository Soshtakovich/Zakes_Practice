#include "main.h"

/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int swap, strt, lst;

	begin = 0;
	end = n - 1;
	while (strt < lst)
	{
		swap = *(a + strt);
		*(a + strt) = *(a + lst);
		*(a + lst) = swap;
		strt++;
		lst--;
	}
}
