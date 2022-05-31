#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Points to the name of the file to create.
 * @text_content: Points to a string to write to the file.
 *
 * Return: -1 if fails or 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fileOpen, fileWrite, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	fileOpen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fileWrite = write(fileOpen, text_content, len);

	if (fileOpen == -1 || fileWrite == -1)
	{
		return (-1);
	}

	close(fileOpen);
	return (1);
}
