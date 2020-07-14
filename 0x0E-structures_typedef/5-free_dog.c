#include "dog.h"
#include <stdlib.h>
/**
* free_dog - who let the dogs out you you did
* @d: dog to be freed
*/
void free_dog(dog_t *d)
{
	if (d->name != NULL)
	free(d->name);

	if (d->owner != NULL)
	free(d->owner);

	if (d != NULL)
	free(d);
}
