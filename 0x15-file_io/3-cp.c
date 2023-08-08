#include "main.h"
/**
 * file_error - sees if file can be opened
 * @file_from: file from
 * @file_to: file to
 * @argv: the program command line arguments
 * Return: no return
 */
void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Erorr: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Erorr: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: the program command line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, fclose;
	ssize_t charz, nr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	       exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);

	charz = 1024;
	while (charz == 1024)
	{
		charz = read(file_from, buff, 1024);
		if (charz == -1)
			file_error(-1, 0, argv);
		nr = write(file_to, buff, charz);
		if (nr == -1)
			file_error(0, -1, argv);
	}
	fclose = close(file_from);
	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	fclose = close(file_to);
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
