#include "holberton.h"
/**
 * errcheck - Handles errors.
 * @e: Switch case for error code.
 * @filename: File causing error.
 */
void errcheck(int e, char *filename)
{
	switch (e)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
		break;

	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
		break;

	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	default:
		break;
	}
}
/**
 * main - Copies the content of a file to another file h.
 * @argc: Argument count.
 * @argv: Arguments.
 * Return: 0 if no errors, else -1.
 */
int main(int argc, char *argv[])
{
	int from1, to2, rd, wrt = 0, fd_close;
	char buf[1024];

	if (argc != 3)
		errcheck(97, NULL);

	from1 = open(argv[1], O_RDONLY);
	rd = read(from1, buf, 1024);
	if (from1 == -1 || rd == -1)
		errcheck(98, argv[1]);

	to2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to2 == -1)
		errcheck(99, argv[2]);

	while (rd != 0)
	{
		wrt = write(to2, buf, rd);
		if (wrt == -1)
			errcheck(99, argv[2]);
		rd = read(from1, buf, 1024);
	}
	fd_close = close(from1);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from1);
		exit(100);
	}
	fd_close = close(to2);
	if (from1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to2);
		exit(100);
	}
	return (0);
}
