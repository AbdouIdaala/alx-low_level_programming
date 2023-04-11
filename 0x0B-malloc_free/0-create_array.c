#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *p = malloc(size * sizeof(c));

	if (p == NULL)
		return (NULL);
 
	unsigned int i;
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
