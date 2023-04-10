#include "main.h"
#include <stdio.h>

/**
  * main - Print the number of args
  * @argc: arguments counts
  * @argv: arguments vectors
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
