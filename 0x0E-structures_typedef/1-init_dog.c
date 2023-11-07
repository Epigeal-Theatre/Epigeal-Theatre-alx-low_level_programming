#include "dog.h"
#include <stdlib.h>
/**
* init_dog - this function initializes
* ...a variable of type struct dog
*
* @d: A pointer to the address containing the struct
*
* @name: NAME
*
* @age: AGE
*
* @owner: OWNER
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;

}
