#include "main.h"

/**
 * append_text_to_file - adds text to the end of a file
 * @filename: path to file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t bytes_wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		bytes_wr = write(fd , text_content, i);

		if (bytes_wr != i)
			return (-1);
	}

	close(fd);

	return (1);
}
