#include "main.h"
#include "stdio.h"

/**
*_puts - print string
*@s:param string
*
*Return: Always 0
*/
void _puts(char s[])
{
	int r = 0;

	while (s[r] != '\0')
	{
		putchar(s[r]);
		r++;
	}
}
