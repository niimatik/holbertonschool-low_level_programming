#include "main.h"

/**
 * main - Entry point. Checks arguments and initiates file copy.
 * @argc: Argument count.
 * @argv: Argument vector containing source and destination file names.
 *
 * Return: 0 on success, exits with code 97 on incorrect usage.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
 * copy_file - Copies the contents of a source file to a destination file.
 * Handles errors related to file opening, reading, writing, and closing.
 * @src: Path to the source file.
 * @dest: Path to the destination file.
 */

void copy_file(const char *src, const char *dest)
{
	int srcfd, destfd, readed;
	char buf[1064];

	srcfd = open(src, O_RDONLY);
	if (!src || srcfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", src);
		exit(98);
	}

	destfd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(srcfd, buf, 1064)) > 0)
	{
		if (write(destfd, buf, readed) != readed || destfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", dest);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", dest);
		exit(98);
	}
	if (close(srcfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", srcfd);
		exit(100);
	}
	if (close(destfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", destfd);
		exit(100);
	}
}
