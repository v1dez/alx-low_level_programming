#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name the file
 * @text_content: content to be added to the end of the file
 * Return: 1 on success -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fs;
	int wr;
	int k = 0;

	if (!filename)
		return (-1);

	fs = open(filename, O_WRONLY | O_APPEND);
	if (fs < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[k])
			k++;

		wr = write(fs, text_content, k);

		if (wr != k)
			return (-1);
	}

	close(fs);
	return (1);
}

