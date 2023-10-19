#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes using rot13
 * @s: parameter
 * Return: String function
 */

char *rot13(char *s)
{
	int k, r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
	for (r = 0; r < 52; r++)
	{
	if (s[k] == data1[r])
	{
	s[k] = datarot[r];
	break;
	}
	}
	}
	return (s);
}
