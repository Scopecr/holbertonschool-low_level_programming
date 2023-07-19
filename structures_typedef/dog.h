#ifndef DOG
#define DOG

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - definde the data types
 * struct dog_t - second strct name
 * @name: string character
 * @age: float
 * @owner: strin character
 */
struct dog
{
char *name;
float age;
char *owner;
};


/*prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
