#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int res;

	res = 0;
	if (argc <= 1)
	{
		printf("0\n");
		return (-1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' && argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%i\n", res);
	return (0);
}