#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of da dog
 * @name: the name of da dog
 * @age: the age of da dog
 * @owner: the owner of da dog
 * Description: dog struct containing its
 * name ,age and, owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
