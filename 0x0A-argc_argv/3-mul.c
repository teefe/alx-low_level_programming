#include <stdio.h>
#include <stdlib.h>

/**
*main-multiplies two arguments
*
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	int mul;
	int n;
	int m;

	if (argc < 3)
	{
		printf("Error\n");
	} else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		mul = n * m;
		printf("%d\n", mul);
	}
	return (0);
}
