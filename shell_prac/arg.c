#include <stdio.h>

/**
 * main - print cmd line aguments
 * @argc: no of command line arguments
 * @argv: array of strings containing the cmd line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 1; //start from index 1 to skip the program name

	while (argv[i] != NULL)
	{
		printf("Argument %d: %s\n", i, argv[i]);
		i++;
	}

	return 0;
}

