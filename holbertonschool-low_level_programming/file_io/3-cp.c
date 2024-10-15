#include "main.h"

/**
 * main - Program that copies the
 * content of a file to another file.
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{

	int fileFrom, fileTo;
	int readBytes = 1024, writeBytes = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fileFrom), exit(99);
	}
	while (readBytes == 1024)
	{
		readBytes = read(fileFrom, buffer, 1024);
		if (readBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writeBytes = write(fileTo, buffer, readBytes);
		if (writeBytes < readBytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(fileFrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom), exit(100);
	if (close(fileTo) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo), exit(100);
	return (0);
}
