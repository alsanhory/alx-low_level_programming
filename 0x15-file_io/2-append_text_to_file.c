#include<unistd.h>
#include "main.h"
/**
 * append_text_to_file - a function to read text file
 * @filename: the file name
 * @text_content: the size
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		res = write(fd, text_content, strlen(text_content));
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
