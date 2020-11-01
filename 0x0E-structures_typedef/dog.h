#ifndef __DOG__
#define __DOG__
/**
 * struct dog - Dog's data.
 * @name: Pet's name.
 * @age: years old (pet's)
 * @owner: pet's owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif

#ifndef __NEW_VAR_DOG__
#define __NEW_VAR_DOG__
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

#ifndef __PRINT_DATA__
#define __PRINT_DATA__
void print_dog(struct dog *d);

#endif
