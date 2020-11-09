#include "holberton.h"
/**
 * create_file - creates a new file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, i, intwrite;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	op = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if(op == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	intwrite = write(op, text_content, i);
	if (intwrite == -1)
		return (-1);
	return (1);
}
