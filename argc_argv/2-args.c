#include <stdio.h>

/**
 * main - print all the args it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
*/

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	printf("%s\n", argv[a]);
	return (0);
}
