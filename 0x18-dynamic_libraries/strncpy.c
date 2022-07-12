#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: string
 * @src: string
 * @n: string
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
