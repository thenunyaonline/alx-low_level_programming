#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for a set of bytes
 * @s: parameter
 * @accept: parameter
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (n = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
