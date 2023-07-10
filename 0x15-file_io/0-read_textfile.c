#include "main.h"

/**
 * read_textfile - reads atext file and prints it in POSIXX
 * @filename: source file name
 * @letters: number of letters to print and read
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn, readn;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fn = open(filename, O_RDONLY, 0600);
	if (fn == -1)
		return (0);

	readn = read(fn, buff, letters);
	write(STDOUT_FILENO, buff, readn);

	free(buff);
	close(fn);

	return (readn);
}
