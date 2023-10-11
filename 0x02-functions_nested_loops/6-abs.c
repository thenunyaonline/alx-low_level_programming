#include "main.h"

/**
 * _abs - function that finds absolute value
 * @a: parameter function
 * Return: -a or a;
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}

	return (0);
}

