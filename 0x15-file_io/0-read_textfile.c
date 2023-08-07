#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the file
 * @letters: number of letters it should read
 * and print
 * Return: the actual number of letters it could read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t fwrite;
	ssize_t fread;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);
	fread = read(file, buffer, letters);
	fwrite = write(STDOUT_FILENO, buffer, fread);
	close(file);
	free(buffer);
	return (fwrite);
}
