#include "variadic_functions.h"

/**
 * print_strings - prinsts strings
 * @separator: separates between strings
 * @n: number of strings
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
