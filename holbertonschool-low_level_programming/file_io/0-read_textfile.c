#include "main.h"

/**
 * read_textfile - Function that reads a text
 * file and prints it to the POSIX standard
 * output.
 *
 * @filename: name of the file to read
 * @letters: number of leter it should read
 * and print
 *
 * Return: actual number of letters it could
 * read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rCount, wCount;
	char *str;

	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(str);
		return (0);
	}
	rCount = read(file, str, letters);
	if (rCount == -1)
	{
		free(str);
		close(file);
		return (0);
	}
	wCount = write(STDOUT_FILENO, str,
			rCount);
	if (wCount == -1 || wCount != rCount)
	{
		free(str);
		close(file);
		return (0);
	}
	free(str);
	close(file);
	return (wCount);
}
