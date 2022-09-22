#include "main.h"

/**
*_strncpy - concatenates two strings,
*@dest: destination.
*@src: source.
*@n: amount of bytes used from src.
*Return: the pointer to dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int destlen = 0;
	int i = 0;

	while (i < n)
	{
		*(dest + destlen) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
		destlen++;
	}
	return (dest);
}
