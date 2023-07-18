#ifndef DOG
#define DOG
/**
 * struct dog - definde the data types
 * struct dog_t - second struct name
 * @name: string character
 * @age: float
 * @owner: strin character
 */
struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/*prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
