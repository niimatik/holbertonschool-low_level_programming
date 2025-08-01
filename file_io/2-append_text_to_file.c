#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: the name of the file to append in
 * @text_content: the text to append at the end of the file
 *
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content && write(fd, filename, _strlen(text_content)) == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
