#ifndef dog_H
#define dog_H

/**
 * struct dog - paramettre d'un chien
 * @name: nom du chien
 * @age: age du chien
 * @owner: cri
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
