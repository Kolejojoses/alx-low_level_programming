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
	if (newLength == 0)
	{
		free(ptr);
		return (NULL);
	}
   	else if (!ptr)
	{
		return malloc(newLength);
	}
  	else if (newLength <= originalLength)
	{
		return ptr;
	}
   	else
      	{
		assert((ptr) && (newLength > originalLength));
		void *ptrNew = malloc(newLength);
		if (ptrNew)
		{
			memcpy(ptrNew, ptr, originalLength);
			free(ptr);
		}
		return (ptrNew);
	}
}
