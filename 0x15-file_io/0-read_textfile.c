#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read and print to posix out
 * @filename: file name
 * @letters: present The number of letters
 * Return: size can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buf;


	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);


	op = open(filename, O_RDONLY);

	re = read(op, buf, letters);

	wr = write(STDOUT_FILENO, buf, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buf);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}
