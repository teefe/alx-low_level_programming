#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
		i++;
	}
	return (c);
}
