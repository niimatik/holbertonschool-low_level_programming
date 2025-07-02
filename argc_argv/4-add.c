#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive number
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
*/

int main(int argc, char *argv[])
{
	int n = 0, a;

	for (a = 1; a < argc; a++)
	{
		if (argv[a] >= 9 || argv[a] <= 0)
		n += atoi(argv[a])
	}
	printf("%d\n", n)
	return (0);
}
