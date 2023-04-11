#include "main.h"

/**
 * append_text_to_file - Append text to file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openFile, writeFile, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	openFile = open(filename, O_WRONLY | O_APPEND);
	writeFile = write(openFile, text_content, len);

	if (openFile == -1 || writeFile == -1)
		return (-1);

	close(openFile);

	return (1);
}

