#include "dog.h"

/**
 * init_dog - Function that initialize a
 * variable of type struct dog
 *
 * @d: pointer d struct type.
 * @name: pointer that takes string as argument.
 * @age: takes age as argument.
 * @owner: takes string for owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
