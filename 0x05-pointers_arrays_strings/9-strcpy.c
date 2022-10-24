#include "main.h"

/**
 * _strcpy - funtion that copies the string pointed to by src
 * @src: pointer
 * @dest: pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	for (n = 0; src[n] != '\0'; n++)
	{
		*(dest + n) = *(src + n);
	}

	*(dest + n) = '\0';
	return (dest);
}
