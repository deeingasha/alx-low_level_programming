#ifndef DOG_H
#define DOG_H

/**
  * struct dog - contains info about dog
  *
  * @name: name of dog
  * @age: age of dog
  * @owner: owner's name
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
