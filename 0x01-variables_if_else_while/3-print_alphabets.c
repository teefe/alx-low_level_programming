#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alpharbet using the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	for (ch='a'; ch <= 'z';ch++)
	    putchar(ch);
    putchar('\n');
	    
    return (0);
}
