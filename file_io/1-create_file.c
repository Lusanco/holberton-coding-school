#include "main.h"

/**
 * create_file - Function that creates a file.
 *
 * @filename: name of the file to create
 * @text_content: string
 *
 * Return: 1 on success, -1 on faluire
 */

int create_file(const char *filename, char *text_content)
{
	int file, result, len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY
		| O_CREAT | O_TRUNC, S_IRUSR
		| S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		result = write(file,
			text_content, len);
		if (result == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
