#ifndef DOG
#define DOG
/**
 * struct dog - definde the data types
 * struct dog_t - second strct name
 * @name: string character
 * @age: float
 * @owner: strin character
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/*prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner):

#endif
