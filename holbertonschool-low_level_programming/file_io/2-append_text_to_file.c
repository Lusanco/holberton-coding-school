#include "main.h"

/**
 * append_text_to_file - Function that appends
 * text at the end of a file.
 *
 * @filename: Name of the flie
 * @text_content: string
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wStatus, cStatus;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY
			| O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		wStatus = write(file,
			text_content, len);
		if (wStatus == -1)
		{
			close(file);
			return (-1);
		}
	}
	cStatus = close(file);
	if (cStatus == -1)
		return (-1);
	return (1);
}
