#include "main.h"

/**
*_strlen - counts the string length
*@s:return value
*
*Return: string length
*/
int _strlen(char s[])
{
	int r = 0;
	{
	while (s[r] != '\0')
		r++;
	return (r);
	}
}
