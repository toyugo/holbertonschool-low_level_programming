#include <stdio.h>
#include "holberton.h"
/**
 * array_iterator - array_iterator
 * @array: int
 * @size: size
 * @action: action
 * Return: int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
