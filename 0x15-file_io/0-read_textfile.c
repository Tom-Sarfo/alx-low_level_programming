/**
 * read_textfile - reads a text and print to stdoutput
 * @filename: file to read from
 * @letters: number of letters in file
 * Return: number of letters, 0 if file does not exist
 * Description: reads a text file and print to the POSIX Standard output
 */
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdesc;
	ssize_t nread, nwrite;
	char *buff;

	if (!filename)
		return (0);

	fdesc = open(filename, O_RDONLY);

	if (fdesc == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nread = read(fdesc, buff, letters);
	nwrite = write(STDOUT_FILENO, buff, nread);

	close(fdesc);

	free(buff);

	return (nwrite);
}
