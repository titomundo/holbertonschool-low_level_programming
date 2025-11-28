#include "main.h"

/**
 * read_textfile - reads a file and prints out it's contents
 * @filename: path to file
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_wr, bytes_rd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	bytes_rd = read(fd, buf, letters);

	if (bytes_rd == -1)
		return (0);

	bytes_wr = write(STDOUT_FILENO, buf, bytes_rd);

	if (bytes_wr != bytes_rd)
		return (0);

	close(fd);
	free(buf);

	return (bytes_wr);
}
