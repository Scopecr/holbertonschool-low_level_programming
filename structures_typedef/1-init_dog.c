#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * init_dog - function that initilazes struct dog
 *
 * @d: struct
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
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
