#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the new file
 * @text_content: contents of the new file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_wr;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	bytes_wr = write(fd, text_content, i);

	if (bytes_wr != i)
		return (-1);

	close(fd);

	return (1);
}
