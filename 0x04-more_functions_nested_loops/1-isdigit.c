#include "main.h"

/**
 * _isdigit - checks digits for 0 to 9
 * @c: function parameter
 * Return: 1 on success and 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
