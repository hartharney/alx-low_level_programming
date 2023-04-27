#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 *
 * Return: new copy
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	char *name_copy, *owner_copy;
	int owner_len = 0;
	int i, name_len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	if (dog == NULL)
		return (NULL);

	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;
	name_copy = malloc(name_len + 1);
	owner_copy = malloc(owner_len + 1);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		name_copy[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		owner_copy[i] = owner[i];
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
