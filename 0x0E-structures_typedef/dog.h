#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - a data structure of a dog
 * @namw: name of the dog
 * @age: age of the dog
 * @owner: name of its owner
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(dog_t *d);
void free_dog(dog_t *d);

#endif

