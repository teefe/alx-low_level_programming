#include "main.h"
#include "stdio.h"

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

/**
*print_rev - print rev string
*@s:param string
*
*Return: Always 0
*/
void print_rev(char s[])
{
	int r = _strlen(s) - 1;

	while (r >= 0)
	{
		putchar(s[r]);
		r++;
	}
	printf("\n");
}
