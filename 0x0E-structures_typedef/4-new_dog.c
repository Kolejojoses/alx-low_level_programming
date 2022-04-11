#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - dog to be copied
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy;
	int i, j;

	copy = malloc(sizeof(dog_t));
	i = strlen(name);
	j = strlen(owner);
	copy->name = malloc(sizeof(char) * (i + 1));
	copy->owner = malloc(sizeof(char) * (j + 1));
	strcpy(copy->name, name);
	strcpy(copy->owner, owner);
	copy->age = age;
	return (copy);
}
