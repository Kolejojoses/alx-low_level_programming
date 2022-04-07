#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate
 * @ptr: pointer
 * @old_size: former size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
   	else if (!ptr)
	{
		return malloc(new_size);
	}
  	else if (new_size <= old_size)
	{
		return (ptr);
	}
   	else
      	{
		assert((ptr) && (ne_size > old_size));
		void *ptrNew = malloc(new_size);
		if (ptrNew)
		{
			memcpy(ptrNew, ptr, old_size);
			free(ptr);
		}
		return (ptrNew);
	}
}
