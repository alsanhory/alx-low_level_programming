#include<unistd.h>
#include "main.h"
/**
 * copy_file - a function to read text file
 * @file_from: the file name
 * @file_to: the file to be copied into
 * Return: 0
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bread, bwrite;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", file_to);
		close(fd_from);
		exit(99);
	}

	while ((bread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bwrite = write(fd_to, buffer, bread);
		if (bwrite == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (bread == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    copy_file(argv[1], argv[2]);

    return 0;
}
