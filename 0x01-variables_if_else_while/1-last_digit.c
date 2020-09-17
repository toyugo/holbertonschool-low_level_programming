#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int n;
	int ld;

	ld = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (ld > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, ld);
	}
	if (ld < 6 && ld != 0)
	{
		printf("Last digit of %i is %i and and is less than 6 and not 0\n", n, ld);
	}
	if (ld == 0)
		printf("Last digit of %i is %i and is 0\n", n, ld);
	return (0);
}
