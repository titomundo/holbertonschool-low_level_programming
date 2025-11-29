#include "main.h"

/**
 * handle_err - helper function to handle exit errors
 * @exit_code: exit signal
 * @filename: file to print
 * @fd_err: file descriptor error
 */
void handle_err(int exit_code, char *filename, int fd_err)
{
	switch (exit_code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);

	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);

	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_err);
		exit(100);
	}
}

/**
 * main - start
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_out, fd_in, close_err;
	ssize_t bytes_wr, MAX_BUF_SIZE = 1024;
	ssize_t bytes_rd = MAX_BUF_SIZE;
	char buf[1024];

	if (argc != 3)
		handle_err(97, "", 0);

	fd_in = open(argv[1], O_RDONLY);

	if (fd_in == -1)
		handle_err(98, argv[1], 0);

	fd_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (fd_out == -1)
		handle_err(99, argv[2], 0);

	while (bytes_rd == MAX_BUF_SIZE)
	{
		bytes_rd = read(fd_in, buf, MAX_BUF_SIZE);

		if (bytes_rd == -1)
			handle_err(99, argv[1], 0);

		bytes_wr = write(fd_out, buf, bytes_rd);

		if (bytes_wr == -1)
			handle_err(98, argv[2], 0);
	}

	if (close(fd_in) == -1)
		handle_err(100, "", fd_in);

	if (close(fd_out) == -1)
		handle_err(100, "", fd_out);

	return (0);
}
