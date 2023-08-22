#include "main.h"

/**
  * _strchr - find character in a string
  * @s: entry point
  * @c: character to locate
  *
  * Return: the string from character located
  */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
