#include "main.h"

/**
 * read_textfile - Read and print a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char buffer[1024];
	ssize_t total = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (letters > 0)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read == -1)
		{
			close(fd);
			return (0);
		}
		if (bytes_read == 0)
			break;

		bytes_written = write(STDOUT_FILENO, buffer, (size_t)bytes_read);

		if (bytes_written == -1 || (ssize_t)bytes_written != bytes_read)
		{
			close(fd);
			return (0);
		}

		letters -= (size_t)bytes_written;
		total += (ssize_t)bytes_written;
	}

	close(fd);
	return (total);
}

