#include "main.h"

/**
 * read_textfile - read text file and print letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdesc;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	fdesc = open(filename, O_RDONLY);

	if (fdesc == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(fdesc, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fdesc);

	free(buff);

	return (nwr);
}
