#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -clears memory allocated to struct dog
 * @d:pointer to the attribute of  struct dog to free
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
