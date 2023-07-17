#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - adding a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the dog obviously
 * Return: ptr to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int new_doggy, old_doggy, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (new_doggy = 0; name[new_doggy]; new_doggy++)
		;
	new_doggy++;
	dog->name = malloc(new_doggy * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < new_doggy; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (old_doggy = 0; owner[old_doggy]; old_doggy++)
		;
	old_doggy++;
	dog->owner = malloc(old_doggy * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < old_doggy; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
