#include "main.h"

/**
  * _memcpy - a fuction to copy memory area
  * @dest: memory where it is saved
  * @src:  memory where is copied
  * @n: bytes number to copy
  *
  * Return: copied memory replaced
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
