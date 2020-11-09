#include "holberton.h"
/**
 * append_text_to_file - a function that appends a text at the end of a file
 * @filename: where filename is the name of the file
 * @text_content: text_content is NULL terminated string to add at end of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, intwrite, i;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i]; i++)
		;
	intwrite = write(op, text_content, i);
	close(op);
	if (intwrite == -1)
	{
		return (-1);
	}
	return (1);
}
