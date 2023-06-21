#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog profile
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 *
 * Description: it holds the dog profile
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
