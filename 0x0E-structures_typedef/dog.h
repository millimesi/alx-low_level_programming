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
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
