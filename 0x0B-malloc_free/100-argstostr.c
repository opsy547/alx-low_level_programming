#include "main.h"

/**
 * _strcat - Concat string, src appended to dest
 *
 * @dest: Destination string
 * @src: Source string
 * Return: Concat newString to dest
 */
char *_strcat(char *dest, char *src)
{
        int a, b;

        for (a = 0; dest[a] != '\0'; a++)
                ;
        for (b = 0; src[b] != '\0'; b++)
        {
                dest[a] = src[b];
                a++;
        }
        return (dest);
}

