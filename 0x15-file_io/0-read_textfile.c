#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and 
 *		prints it to the POSIX standard output
 *@filename: Points to the filename path
 *@letters: The number of letters to be printed
 *
 *Return: The number of bytes to be printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileOpen, fileRead, fileWrite;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fileOpen = open(filename, O_RDWR);
	
	if (fileOpen == -1)
	{
		return (0);
	}
	fileRead = read(fileOpen, buffer, letters);
	
	if (fileRead == -1)
	{
		return (0);
	}
	fileWrite = write(STDOUT_FILENO, buffer, fileRead);

	if (fileWrite == -1 || fileRead != fileWrite)
	{
		return (0);
	}

	free(buffer);
	close(fileOpen);

	return (fileWrite);
}

