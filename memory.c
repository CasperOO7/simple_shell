#include "main.h"
​
/**
 * _calloc - function that uses malloc to allocate memory for an array
 * @nmemb: it's an array
 * @size: it's a size
 * Return: it's either a pointer or NULL
 */
​
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index = 0;
	char *ptr = NULL;
​
	if (nmemb == 0 || size == 0)
		return (NULL);
​
	ptr = malloc(nmemb * size);
​
	if (ptr == NULL)
		return (NULL);
​
	for (; index < (nmemb * size); index++)
		ptr[index] = 0;
​
	return (ptr);
}
