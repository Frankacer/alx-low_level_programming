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

int create_file(const char *filename, char *text_content)
{
	/*declarations*/
	int fd = 0;
	ssize_t bytes_written = 0, size = 0;

	/*check if filename is NULL*/
	if (filename == NULL)
		return (-1);

	/*if text_content is NULL, make it an empty string*/
	if (text_content == NULL)
		text_content = "";

	/*Open file*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	/*Check if file was successfully opened*/
	if (fd == -1)
	{
		perror("File could not be created");
		return (-1);
	}

	/*write to open file*/
	size = _strlen(text_content);
	while (size > 0)
	{
		bytes_written = write(fd, text_content, size);

		/*Check if write failed*/
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

