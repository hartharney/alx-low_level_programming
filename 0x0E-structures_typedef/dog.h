#ifndef __DOG__H__
#define __DOG__H__

/**
 * struct dog - dog information
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Description: Dog Details
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
