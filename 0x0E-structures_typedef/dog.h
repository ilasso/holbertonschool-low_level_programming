#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structc dog
 * @name: Dog Name
 * @age: Dog age
 * @owner: Dog's Owner
 *
 * Description: Longer description
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
#endif /* DOG_H */
