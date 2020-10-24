#include "variadic_functions.h"
/**
 * print_strings - print_strings
 * @separator: separator
 * @n: constant to stop variadic
 * Return: argument of type string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(va, char*));
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
