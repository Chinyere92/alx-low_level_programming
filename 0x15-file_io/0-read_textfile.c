#include "main.h"
/**
 * read_textfile - read text file
 * @filename: file to read from
 * @letters: amount of bites to read
 * Return: total read bites
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *ptr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, ptr, letters);
	if (r == -1)
	{
		free(ptr);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, ptr, r);
	if (w == -1 || w != r)
	{
		free(ptr);
		close(fd);
		return (0);
	}

	free(ptr);
	close(fd);

	return (w);
}
