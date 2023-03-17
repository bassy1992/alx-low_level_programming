#include <stdio.h>

/**
 * main - Entry Point
 *
 * Print the size of various data type in C
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char u;
        int v;
        long int w;
        long long int x;
        float y;

        printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(u));
        printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(v));
        printf("Size of a long int: %u byte(s)\n", (unsigned int)sizeof(w));
        printf("Size of a long long int: %u byte(s)\n", (unsigned int)sizeof(x));
        printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(y));
        return (0);

