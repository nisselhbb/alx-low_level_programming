#include "main.h"
/**
 * append_text_to_file - appends text at the end of
 * a file
 * @filename: file name
 * @text_content: a NULL terminated string to add at
 * the end of the file
 * Return: 1 if succeeded, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int length;
	int fwrite;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;
		fwrite = write(file, text_content, length);
		if (fwrite == -1)
			return (-1);
	}
	close(file);
	return (1);
}
