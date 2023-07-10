#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the source file
 * @text_content: string to write into filename
 *
 * Return: 1 on success, -1 on failure
 * (file to be created cannnot be written 'write' fails)
 */

int create_file(const char *filename, char *text_content)
{
	int fn;

	if (!filename)
		return (-1);

	fn = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fn == -1)
		return (-1);

	if (text_content)
		write(fn, text_content, _strlen(text_content));

	close(fn);
	return (1);
}

/**
 * _strlen - retruns length of screen
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

