#include "main.h"

/**
*1-swap.c - swpping the int values
*@a: int swap variable
*@b: another swap variable
*@c: temp swap variable
*
*Return: Always 0
*/
void 1-swap(int *a,int *b)
{
	int c = *a;
	*a = *b;
	*b = *a;
}
