#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters function should read and print
 * Return: returns the actual number of letters
 * it could read and print if the file can
 * not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);/**read*/
	w = write(STDOUT_FILENO, buffer, r);/**andika*/

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
/**
 * file: 0-read_textfile.c
 * Author: Justin
 */
