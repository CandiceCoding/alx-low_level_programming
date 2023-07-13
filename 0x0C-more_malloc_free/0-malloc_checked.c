#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *zmc;

	zmc = malloc(b);

	if (zmc == NULL)
		exit(98);

	return (zmc);
}
