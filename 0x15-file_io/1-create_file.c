#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content writed in the file
 * Return: 1 if it success. -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fed, nletters, rwr;

	if (!filename)
		return (-1);

	fed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fed == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fed, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fed);

	return (1);
}
