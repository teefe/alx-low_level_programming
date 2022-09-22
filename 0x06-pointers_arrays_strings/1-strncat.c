#include "main.h"

/**
*_strcat - concatenates two strings,
*@dest: destination.
*@src: source.
*@n: amount of bytes used from src.
*Return: the pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i = 0;

	while (*(dest + destlen) != '\0')
	{
		destlen++;
	}

	while (*(src + srclen) != '\0')
	{
		srclen++;
	}

	while (i < n)
	{
	*(dest + destlen) = *(src + i);
	i++;
	destlen++;
	}
	return (dest);
}
