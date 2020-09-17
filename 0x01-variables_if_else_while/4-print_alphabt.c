#include <stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int i;
	i = 'a';
	while (i < 'z')
	{
		if (i != 'q' || i != 'e')
			putchar(i);
	}
	return (0);
}
