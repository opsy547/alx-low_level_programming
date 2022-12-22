/*
 * File: 0-strcat.c
 * Auth: Opeyemi Odedoyin
 */

#include "main.h"

/**
 * strcat - Concatenates two string.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The pointer source.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int a = -1, i;
	for (i = 0; dest[i] != '\0'; i++);
	
	do{
		a++;
		dest[i] = src[a];
		i++;
	}
	while (src[a] != '\0');
	return (dest);
}
