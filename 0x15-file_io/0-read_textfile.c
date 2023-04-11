#include "main.h"
/**
 * read_textfile - This function reads a textfile and
 * prints to POSIX standard output.
 * @filename: The file to be read.
 * @letters: Unsigned int parameters for characters
 * Return: actual number of bytes read and print
 * if file can not be opened return 0
 * if filename is NULL return 0
 * if write fails return 0
 * date: 09-04-2023
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rbytes, wbytes;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);

	buffer = (void *)malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	rbytes = read(fd, buffer, letters);
	wbytes = write(STDOUT_FILENO, buffer, rbytes);
	if (fd == -1 || rbytes == -1 || wbytes == -1 || wbytes != rbytes)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wbytes);
}
