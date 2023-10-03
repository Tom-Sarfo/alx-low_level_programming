/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_context: Null terminated string to write to the file
 * Return: 1 on succes, -1 on failure
 * Description: create a file
 */
#include "main.h"


int create_file(const char *filename, char *text_content)
{
	int fdesc;
	int nletters;
	int rwrite;

	if (!filename)
		return (-1);

	fdesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdesc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwrite = write(fdesc, text_content, nletters);

	if (rwrite == -1)
		return (-1);

	close(fdesc);

	return (1);
}
