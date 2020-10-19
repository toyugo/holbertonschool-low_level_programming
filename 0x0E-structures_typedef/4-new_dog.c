#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
