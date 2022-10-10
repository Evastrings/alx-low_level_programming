#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *@s: pointer of character
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
		length++;
	return (length);
}

/**
 * *_strcpy - copies the string pointed
 *@dest: copy of the string
 *@src: origin of the string
 *Return: dest destination copied
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of owner of the dog
 *Return: dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cname, *cowner;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	cname = malloc(sizeof(char *) * (_strlen(name) + 1));

	if (cname == NULL)
	{
		free(cname);
		free(new_dog);
		return (NULL);
	}

	cname = _strcpy(cname, name);

	cowner = malloc(sizeof(char *) * (_strlen(owner) + 1));
	if (cowner == NULL)
	{
		free(cowner);
		free(cname);
		free(new_dog);
		return (NULL);
	}

	cowner = _strcpy(cowner, owner);

	new_dog->name = cname;
	new_dog->age = age;
	new_dog->owner = cowner;

	return (new_dog);
}
