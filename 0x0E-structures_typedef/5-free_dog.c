#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free_dog
 * @d: dog_t structure
 * Return: 0
 */
void free_dog(dog_t *d)
{
	free(owner);
	free(name);
	free(d);
}
