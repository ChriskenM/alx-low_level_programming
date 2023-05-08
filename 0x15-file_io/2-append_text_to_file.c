#include "main.h"

/**
 *append_text_to_file - adds text to the end of file
 *@filename: name of the source file
 *@text_content: string to add t end of file
 *
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fn;

	if (!filename)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
		return (-1);

	if (text_content)
	{
		if (write(fn, text_content, _strlen(text_content)) == -1)
			return (-1);
	}
	close(fn);
	return (1);
}

/**
 *_strlen - length of string
 *@s: string to be counted
 *
 *Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
