#include "dog.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a copy of the argument string
  *
  * @str: string to copy
  *
  * Return: Success --> pointer to the duplicated string
  *         Null --> insufficient memory available
  */
char *_strdup(char *str)
{
	int i = 0;
	char *cp;
	int len = 0;

	if (str == NULL)           /*have to check first to avoid segfault */
		return (NULL);

	while (*str++)
		len++;

	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

/**
  * new_dog - creates a new dog
  *
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner
  *
  * Return: Success --> pointer to new dog
  *           Fail --> NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
