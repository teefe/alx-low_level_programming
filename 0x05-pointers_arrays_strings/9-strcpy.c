#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char d[], char src[])
{
	int count = 0;

	while (count >= 0)
	{
		d[] = src[];
		if (src[] == '\0')
			break;
		count++;
	}
	return (d);
}
