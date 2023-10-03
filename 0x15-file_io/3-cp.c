#include "main.h"

/**
 * main - entry point to another file
 *
 * @arc:number of arguments
 * @arv:arguments file destinations
 *
 * Return: 0 if succes
 */
int main(int arc, char **arv)
{
	int File_from, File_to;
	ssize_t Fl_read = 1024, Fl_write, close_Fl;
	char content[1024];


	if (arc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	File_from = open(arv[1], O_RDONLY);
	if (File_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
		exit(98); }
	File_to = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (File_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
		exit(99); }
	while (Fl_read == 1024)
	{
		Fl_read = read(File_from, content, 1024);
		if (Fl_read == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
			exit(98); }
		Fl_write = write(File_to, content, Fl_read);
		if (Fl_write == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
			exit(99); }
	}
	close_Fl = close(File_from);
	if (close_Fl == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", File_from);
		exit(100); }
	close_Fl = close(File_to);
	if (close_Fl == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", File_to);
		exit(100); }
	return (0);
}
