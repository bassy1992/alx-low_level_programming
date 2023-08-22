#include "main.h"

/**
  * _memset - Fill memory with a byte
  * @s: memory area to be filled
  * @b: constant byte to filled
  * @n: bytes of memory area to be filled
  *
  * Return: the memory area filled
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
