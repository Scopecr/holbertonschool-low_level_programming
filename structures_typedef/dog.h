#ifndef DOG
#define DOG
/**
 * struct dog - definde the data types
 * @name: string character
 * @age: float
 * @owner: strin character
 */
struct dog
{
char *name;
float age;
char *owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
