#include "dog.h"
/**
 *free_dog - function for free dog object
 *
 * @d: free dog object
 *
 * Return: void nothing
 */
void free_dog(dog_t *d)
{
     if (d == 0)
    {
        return;
    }
    if (d->name)
    { 
        free(d->name);
    }
    if (d->owner)
    {
        free(d->owner);
    }
    free(d);
}
