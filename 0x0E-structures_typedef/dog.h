#include "dog.h"

/**
 * init_dog - struct dog
 * @d: pointer to da dog dog
 * @name: the name da dog
 * @age: age of da dog
 * @owner: owner of da dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
