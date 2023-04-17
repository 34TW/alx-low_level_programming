#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic informtion
 * @name:first memeber
 * @age:second member
 * @owner:third member
 * Description: longer description
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


#endif
