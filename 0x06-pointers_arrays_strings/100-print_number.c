#include "holberton.h"
/**
* print_number - print_number
* n: int
* Return: char
*/

void print_number(int n)
{
	int nbpower;
	unsigned int nb;
	unsigned int nb1;

	nb1 = n;
	nb = n;
	nbpower = 1;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		nb1 = -n;
		nb = -n;
		_putchar('-');
	}
	while (nb / 10 != 0)
	{
		nb /= 10;
		nbpower *= 10;
	}
	while (nb1 != 0)
	{
		nb = nb1 / nbpower;
		_putchar(nb + '0');
		nb1 -= nb * nbpower;
		nbpower /= 10;
	}
}
