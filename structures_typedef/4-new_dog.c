#include "dog.h"

/**
 * my_strdup - Custom string duplication function.
 *
 * @str: String to duplicate.
 *
 * Return: Pointer to the newly allocated
 * duplicate string, or NULL if failure.
 */

char *my_strdup(char *str)
{
	char *dup_str;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup_str = malloc((len + 1) *
			sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}

	return (dup_str);
}

/**
 * new_dog - Function that creates a new dog.
 *
 * @name: name of dog struct
 * @age: age of dog struct
 * @owner: owner of dog struct
 *
 * Return: new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = my_strdup(name);
	new_dog->owner = my_strdup(owner);

	if (new_dog->name == NULL
		|| new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
