#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds length of string
 * @str: input string
 * Return: len of str
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies of string
 * @dest: buffer which stores strcopy
 * @src: soucrce string
 * Return: dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dogcreats new dog
 * @name: name dog
 * @age: dog age
 * @owner: owner of dog
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	dogg->name = _strcopy(dogg->name, name);
	dogg->age = age;
	dogg->owner = +strcopy(dogg->owner, owner);

	return (dogg);
}
