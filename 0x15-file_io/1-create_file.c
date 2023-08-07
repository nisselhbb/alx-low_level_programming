#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to the file to be created
 * @text_content: a NULL terminated string to write to the
 * file
 * Return: 1 if succeeded, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int length;
	int per;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (length = 0; text_content[length]; length++)
		;
	per = write(file, text_content, length);
	if (per == -1)
		return (-1);
	close(file);
	return (1);
}
