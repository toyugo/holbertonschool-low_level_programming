#include "holberton.h"
#include<stdio.h>
/**
* infinite_add - infinite_add
* n1: char
* n2: char
* r: char
* size_r: int
* Return: char
*/
int str_len(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	;

	return(i);
}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int k;
	int ret = 0;

	i = str_len(n1) - 1;
	j = str_len(n2) - 1;
	k = 0;

	while (i >= 0 && j >= 0)
	{
		r[k] = n1[i] -'0' + n2[j] -'0';
		printf("*** r[k] vault %c***\n", r[k] -10 + '0');
		if (r[k] - '0' >= 10)
		{
			printf("add retenuer r[k] vault %c\n", r[k]);
			ret = 1;
			r[k] -= 10;
		}
	
		r[k] = r[k] + '0';
		printf("k= %i r[k]= %c ;  n1[i] = %i +  n2[j] = %i\n",k, r[k], n1[i] - '0', n2[j] - '0'); 
		ret = 0;
		printf("decrement i %i", i); 
		i--;
		printf("i vault %i\n", i);
		printf("decrement j %i", j); 
		j--;
		printf("j vault %i\n", j);
		printf("decrement k %i", k); 
		k++;
		printf("k vault %i\n", k);
	}
	r[k] = '\0';
	printf("string de k vault : <%c>", r[0]);
	printf("END \n");
	return (r);
}
