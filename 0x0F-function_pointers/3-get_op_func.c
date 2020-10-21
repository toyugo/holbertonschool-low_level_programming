#include "function_pointers.h"

/**
 *get_op_func - function getopfunc with chars m 
 *@s: string
 *Return: pointer to the function needed
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

}
