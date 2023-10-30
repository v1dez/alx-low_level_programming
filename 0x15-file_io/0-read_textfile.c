#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printed. It fails, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fed;
	ssize_t nd, nr;
	char *beuf;

	if (!filename)
		return (0);

	fed = open(filename, O_RDONLY);

	if (fed == -1)
		return (0);

	beuf = malloc(sizeof(char) * (letters));
	if (!beuf)
		return (0);

	nd = read(fed, beuf, letters);
	nr = write(STDOUT_FILENO, beuf, nd);

	close(fed);

	free(beuf);

	return (nr);
}
