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
	int fileFrom, fileTo, readStat,
	    writeStat, closeOne, closeTwo;
	char buffer[1024];
	mode_t permissions = S_IRUSR | S_IWUSR
		| S_IRGRP | S_IWGRP
		| S_IROTH | S_IWOTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
		"Usage: %s file_from file_to\n",
		argv[0]);
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n",
	argv[1]);
		exit(98);
	}
	fileTo = open(argv[2], O_CREAT | O_WRONLY
	, permissions);
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n",
		argv[2]);
		exit(99);
	}
	while ((readStat = read(fileFrom,
			buffer, 1024)) > 0)
	{
		writeStat = write(fileTo,
			buffer, readStat);
		if (writeStat != readStat)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n",
			argv[2]);
			close(fileFrom);
			close(fileTo);
			exit(99);
		}
	}
	if (readStat == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n",
		argv[1]);
		close(fileFrom);
		close(fileTo);
		exit(98);
	}
	closeOne = close(fileFrom);
	closeTwo = close(fileTo);
	if (closeOne == -1 || closeTwo == -1)
	{
		if (closeOne == -1)
			dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n",
			fileFrom);
		if (closeTwo == -1)
			dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n",
			fileTo);
		exit(100);
	}
	return (0);
}
