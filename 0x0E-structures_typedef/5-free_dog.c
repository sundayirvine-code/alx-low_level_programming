#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  *free_dog - frees the memory occupied by dog_t type
 *   *@d:struct to free
 *    *Return:void
 *     */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d -> owner);
		free(d -> name);
		free(d);
	}
}
