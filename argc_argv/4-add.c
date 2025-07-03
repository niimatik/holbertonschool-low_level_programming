#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - add positive number
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
*/

int main(int argc, char *argv[])
{
	int sum = 0, a;
	char *b;
	unsigned c;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			b = argv[a];

			for (c = 0; c < strlen(b); c++)
			{
				if (b[c] < 48 || b[c] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(b);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
