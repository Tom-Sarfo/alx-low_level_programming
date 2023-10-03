/**
 * append _text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: a string to add at the end of file
 * Return: 1 on success, -1 on failure
 * Description: appends atext at the end of a file
 */
#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc;
	ssize_t end;

	if (!filename)
		return (-1);

	fdesc = open(filename, O_WRONLY | O_APPEND);

	if (fdesc == -1)
		return (-1);

	if (text_content)
	{
		end = write(fdesc, text_content, strlen(text_content));

		if (end == -1)
		{
			close(fdesc);
			return (-1);
		}
	}

	close(fdesc);
	return (1);

}
