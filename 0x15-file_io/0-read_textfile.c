#include "holberton.h"
/**
 * read_textfile - read a text file and prints it to the POSTX standart ouptput
 * @letters: number of letters it should read and print.
 * @filename: pointer to the string of char
 * Return: numeber of letters, 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, tread, twrite;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(letters * sizeof(char) + 1);
	if (!s)
		return(0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}
	tread = read(fd, s, letters);
	if (tread == -1)
	{
		free(s);
		return (0);
	}
	twrite = write(STDOUT_FILENO, s, tread);
	close(fd);
	free(s);
	if (tread == twrite)
		return (twrite);
	return (0);
}
