#ifndef DOG_H
#define DOG_H
/**
 * struct dog -definition of a dog
 * @name: character string
 * @age: integer
 * @owner: character string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
