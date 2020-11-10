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
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Arguments.
 * Return: 0 if no errors, else -1.
 */
int main(int argc, char *argv[])
{
	int fopen, topen, rd, wrt = 0, fd_close;
	char *buf;

	if (argc != 3)
		errcheck(97, NULL);
	buf = malloc(1024);
	fopen = open(argv[1], O_RDONLY);
	rd = read(fopen, buf, 1024);
	if (fopen == -1 || rd == -1)
		errcheck(98, NULL);

	topen = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (topen == -1)
		errcheck(99, argv[2]);

	while (rd > 0)
	{
		wrt = write(topen, buf, rd);
		if (wrt == -1)
			errcheck(99, argv[2]);
		rd = read(fopen, buf, 1024);
	}
	fd_close = close(fopen);
	if (fd_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fopen);
		exit(100);
	}
	fd_close = close(topen);
	if (fd_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d", topen);
		exit(100);
	}
	return (0);
}
