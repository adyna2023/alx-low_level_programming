#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to POSIX STDOUT
 * @filename: points to the name of the file
 * @letters: number of letters to read and print
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t d;
	ssize_t w;
	ssize_t r;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(d, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(d);
	return (w);
}
