#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of file
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters that could be read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_read = 0, letters_printed = 0, total_letters_printed = 0;
	int fd = 0;
	char buffer[1024];
	char *bufferPtr = buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	while ((letters_read = read(fd, bufferPtr, letters)) > 0)
	{
		letters_printed = write(STDOUT_FILENO, bufferPtr, letters_read);
		if (letters_printed == -1)
		{
			close(fd);
			return (0);
		}
		total_letters_printed += letters_printed;
		letters -= letters_printed;
		bufferPtr += letters_printed;
	}
	if (letters_read == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (total_letters_printed);
}
