#include "dog.h"
#include <stdlib.h>
/**
 *new_dog- creates a new dog structure
 *@name:the name of the dog
 *@age:the age of the dog
 *@owner:the age of the dog
 *Return: a new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
