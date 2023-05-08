#include "main.h"

/**
 *main - entry
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: nothing
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
 *copy_file - copies to file_to
 *@src: source file
 *@dest: destination file
 *
 *Return: nothing
 */

void copy_file(const char *src, const char *dest)
{
	int ofn, tfn, readn;
	char buff[1024];

	ofn = open(src, O_RDONLY);
	if (!src || ofn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	tfn = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readn = read(ofn, buff, 1024)) > 0)
	{
		if (write(tfn, buff, readn) != readn || tfn == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (readn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(ofn) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fn %d\n", ofn);
		exit(100);
	}
	if (close(tfn) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fn %d\n", tfn);
		exit(100);
	}
}


