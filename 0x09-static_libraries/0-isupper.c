#include "main.h"

/**
 * _isupper - checks for characters in uppercase
 * @c: function parameter
 * Return: 1 on success o on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
