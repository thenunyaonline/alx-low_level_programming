#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: the name
 * @f: variable
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
