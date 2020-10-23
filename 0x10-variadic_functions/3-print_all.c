#include "variadic_functions.h"

/**
 * print_char - print_char
 * @va: valist
 * Return: void
 */

void print_char(va_list va)
{
	printf("%c", va_arg(va, int));
}

/**
 * print_string - print_string
 * @va: valist
 * Return: void
 */

void print_string(va_list va)
{
	char *s;

	s = va_arg(va, char*);
	if (s == NULL)
		printf("nil");
	else
		printf("%s", s);
}

/**
 * print_integer - print_integer
 * @va: valist
 * Return: void
 */

void print_integer(va_list va)
{
	printf("%i", va_arg(va, int));
}
/**
 * print_float - print_float
 * @va: valist
 * Return: void
 */

void print_float(va_list va)
{
	printf("%f", va_arg(va, double));
}
/**
 * print_all - print_all
 * @format: const char*
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list va;
	s_format tab[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
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
		b = 0;
		while (tab[j].type)
		{
			if (format[i] == tab[j].type)
				/*launch associated format */
				tab[j].fuprint(va);
				b = 1;
			}
		j++;
		}
		if (format[i + 1] == '\0')
			printf("\n");
		else if (b == 1)
			printf(", ");
		i++;
	}
	va_end(va);
}

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	print_all("ceis", 'H', 0, "holbert");
	return (0);
}
