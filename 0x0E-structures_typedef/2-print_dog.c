#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog
 * @d: structure dog
 */

void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
