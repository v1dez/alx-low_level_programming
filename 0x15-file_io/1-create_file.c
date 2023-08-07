#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of filename
 * @text_content: content to write in the file
 * Return: 1 if it success -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fs;
	int let;
	int k;

	if (!filename)
		return (-1);

	fs = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fs == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++);

	k = write(fs, text_content, let);

	if (k == -1)
		return (-1);

	close(fs);

	return (1);
}
