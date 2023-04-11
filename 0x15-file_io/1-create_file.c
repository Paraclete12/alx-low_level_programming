#include "main.h"
/**
 * create_file - This function creates a file
 * @filename: File name
 * @text_content: content of the file
 * Return: 1 on success and -1 on failure.
 * Date: 09-04-2023
 */
int create_file(const char *filename, char *text_content)
{
	int fd, noChar = 0, writeChar;

	if (filename == false)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[noChar])
		noChar++;
	writeChar = write(fd, text_content, noChar);
	if (writeChar == -1)
		return (-1);
	close(fd);
	return (1);
}
