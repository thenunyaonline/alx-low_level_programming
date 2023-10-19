#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: parameter
 * @n: parameter
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
	r = a[k];
	a[k] = a[n];
	a[n] = r;
	}
}
