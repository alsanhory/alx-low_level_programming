#include<unistd.h>
#include "main.h"
/**
 * read_textfile - a function to read text file
 * @filename: the file name
 * @size_t: the size
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bread, bwrite;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bread = read(fd, buffer, letters);
	if (bread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bwrite = write(STDOUT_FILENO, buffer, bread);
	if (bwrite == -1 || bwrite != bread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bwrite);
}

