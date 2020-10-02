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
char *reverse_str(char *s)
{
	char tmp;
	int size;
	int i;
	
	size = str_len(s) - 1;
	for (i = 0; i <= size / 2; i++)
	{
		tmp = s[i];
		s[i] = s[size - i];
		s[size -i] = tmp;
	}
	return (s);
}
int ctoint(char c)
{	
	return (c - '0');
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int k;
	int ret = 0;
	int tmpn1=0;
	int tmpn2=0;
	int tmptot=0;

	i = str_len(n1) - 1;
	j = str_len(n2) - 1;
	k = 0;

	while (i >= 0 || j >= 0 || ret != 0)
	{
		tmpn1 = ctoint(n1[i]);
		tmpn2 = ctoint(n2[j]);
		if (i < 0)
			tmpn1 = 0;
		if (j < 0)
			tmpn2 = 0;
//		printf("old tmptot = %i\n",tmptot);
		tmptot = tmpn1 + tmpn2 + ret;
//		printf("i = %i tmptot new: %i = tmpn1:%i + tmpn2: %i + ret: %i\n",i, tmptot, tmpn1, tmpn2, ret);
		ret = 0;

		if (tmptot >= 10)
		{
//		printf("RETENUE\n");
			ret = 1;
			tmptot -= 10;
		}
	
		r[k] = tmptot + '0';
//		printf("k= %i r[k]= %c ;  n1[i] = %i +  n2[j] = %i\n",k, r[k], n1[i] - '0', n2[j] - '0'); 
//		printf("decrement i %i", i);
		i--;
//		printf("i vault %i\n", i);
//		printf("decrement j %i", j); 
		j--;
//		printf("j vault %i\n", j);
//		printf("decrement k %i", k); 
		k++;
//		printf("k vault %i\n", k);
	}
	r[k] = '\0';
	reverse_str(r);
//	printf("string de k vault : <%c>", r[0]);
//	printf("END \n");
	return (r);
}
