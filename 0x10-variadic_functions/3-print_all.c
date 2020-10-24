#include "variadic_functions.h"

/**
 * print_char - print_char
 * @va: valist
 * Return: void
 */

void print_char(const char *separator, va_list va)
{
	printf("%c%s", va_arg(va, int), separator);
}

/**
 * print_string - print_string
 * @va: valist
 * Return: void
 */

void print_str(const char *separator, va_list va)
{
	printf("%s%s", va_arg(va, char *), separator);
}

/**
 * print_integer - print_integer
 * @va: valist
 * Return: void
 */

void print_integer(const char *separator, va_list va)
{
	printf("%i%s", va_arg(va, int), separator);
}
/**
 * print_float - print_float
 * @va: valist
 * Return: void
 */

void print_float(const char *separator, va_list va)
{
	printf("%f%s", va_arg(va, double), separator);
}
/**
 * print_all - print_all
 * @format: const char*
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list va;
	char *separator = "";
	s_format tab[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	int i;
	int j;
	int b;

	va_start(va, format);
	i = 0;
	/*parcourt le format */
	while (format[i])
	{
		j = 0;
		/*parcourt la structure*/
		while (tab[j].type)
		{
			if (tab[j+1].type != NULL)
				separator = ", ";
			if (format[i] == tab[j].type)
				/*launch associated format */
				tab[j].fuprint(separator, va);
			}
		j++;
		}
	}
	printf("\n");
	va_end(va);
}
