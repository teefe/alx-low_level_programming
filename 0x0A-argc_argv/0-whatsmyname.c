#include <stdio.h>
/**
*main-function to print its name
*
*@argc: argument count
*@argv: argument vector
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
