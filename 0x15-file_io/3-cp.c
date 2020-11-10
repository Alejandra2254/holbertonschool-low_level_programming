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

	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", filename);
		exit(100);

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
	int fopen, topen, rd, wrt = 0;
	char buf[1024];

	if (argc != 3)
		errcheck(97, NULL);

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
	if (close(fopen) == -1)
		errcheck(100, "fopen");
	if (close(topen) == -1)
		errcheck(100, "topen");
	return (0);
}
