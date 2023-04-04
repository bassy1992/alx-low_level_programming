#include "main.h"

/**
  * _strpbrk -look for a string of any of a set of bytes
  * @s: source string
  * @accept: take characters
  *
  * Return: Always 0 (Success)
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
