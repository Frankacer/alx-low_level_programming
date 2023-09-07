#include "main.h"

/**
 * _strlen - computes length of input string
 * @s: input string
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text to write to file
 * Return: return 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t bytes_written = 0, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	size = _strlen(text_content);
	while (size > 0)
	{
		bytes_written = write(fd, text_content, size);
		if (bytes_written == -1)
		{
			close(fd);
			perror("File could not be written to");
			return (-1);
		}
		text_content += bytes_written;
		size -= bytes_written;
	}
	close(fd);
	return (1);
}

