#ifndef DOG_H
#define DOG_H
/**
 * struct dog - "structure definition of a dog"
 * @name: "string"
 * @age: "float"
 * @owner:"character"
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
