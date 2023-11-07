#include "dog.h"
#include <stdlib.h>

/**
*free_dog -DMA function to free memory adress associated to struct
*
*@d: struct to be free' d
*/

void free_dog(dog_t *d)
{

	if (d)

	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
