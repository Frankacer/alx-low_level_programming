#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters that could be read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_read = 0, letters_printed = 0, total_bytes_written = 0;
	int fd = 0;
	char buffer[1024];

	if (!filename)
		return (0);

	/*open file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (letters > 0)
	{
		/*read file*/
		letters_read = read(fd, buffer, letters);
		if (letters_read == -1)
		{
			close(fd);
			return (0);
		}
		if (letters_read == 0)/*if no more data can be read, exit loop*/
			break;

		/*write to stdout*/
		letters_printed = write(STDOUT_FILENO, buffer, letters_read);
		if (letters_printed == -1 || letters_printed != letters_read)
		{
			close(fd);
			return (0);
		}

		letters -= (size_t)letters_read;
		total_bytes_written += letters_printed;
	}

	close(fd);
	return (total_bytes_written);
}

