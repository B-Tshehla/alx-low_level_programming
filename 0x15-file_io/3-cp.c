#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1204
#define SE STDERR_FILENO
/**
 * main - create the copy bash script
 * @count: argument count
 * @arg: arguments as strings
 * Return: 0
 */
int main(int count, char *arg[])
{
	int input_f, output_f, inputStat, outputStat;
	char buffer[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	
	if (count != 3)
	{
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	}
	
	input_f = open(arg[1], O_RDONLY);
	
	if (input_f == -1)
	{
		dprintf(SE, "Error: Can't read from file %s\n", arg[1]), exit(98);
	}
	
	output_f = open(arg[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	
	if (output_f == -1)
	{
		dprintf(SE, "Error: Can't write to %s\n", arg[2]), exit(99);
	}

	do {
		inputStat = read(input_f, buffer, MAXSIZE);
		
		if (inputStat == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", arg[1]);
			exit(98);
		}
		
		if (inputStat > 0)
		{
			outputStat = write(output_f, buffer, (ssize_t) inputStat);
			
			if (outputStat == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", arg[2]), exit(99);
			}
		}
	} while (inputStat > 0);

	inputStat = close(input_f);
	
	if (inputStat == -1)
	{
		dprintf(SE, "Error: Can't close fd %d\n", input_f), exit(100);
	}
	
	outputStat = close(output_f);
	
	if (outputStat == -1)
	{
		dprintf(SE, "Error: Can't close fd %d\n", output_f), exit(100);
	}

	return (0);
}
