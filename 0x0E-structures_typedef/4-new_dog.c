#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: name of the name dog
 * @age: age of it
 * @owner: onwer of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		return (NULL);
	}
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);

}
