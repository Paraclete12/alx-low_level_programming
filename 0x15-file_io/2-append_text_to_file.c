#include "main.h"
/**
 * append_text_to_file - This functon append text at the end of file.
 * @filename: name of file
 * @text_content: content to append to file
 * Return: 1 on success || -1 on failure
 * Date: 09-04-2023
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, noChar = 0, writeChar;

	if (filename == false)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[noChar])
			noChar++;

		writeChar = write(fd, text_content, noChar);

		if (writeChar == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
