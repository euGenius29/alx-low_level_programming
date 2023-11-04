#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file to create
 * @text_context: NULL terminated string to write to the file
 * 
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int file_store;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	file_store = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_store == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for(nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(file_store, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(file_store);
	return (1);
}
