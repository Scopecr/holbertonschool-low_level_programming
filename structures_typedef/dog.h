#ifndef DOG
#define DOG
/**
 * struct dog - definde the data types
 * struct dog_t - second struct name
 * @name: string character
 * @age: float
 * @owner: strin character
 */
struct dog struct dog_t
{
char *name;
float age;
char *owner;
};

/*prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
