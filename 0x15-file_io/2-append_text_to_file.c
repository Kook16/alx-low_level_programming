#include "main.h"

/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 * Return: ...
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int inhandle;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	inhandle = open(filename, O_APPEND | O_WRONLY);
	if (inhandle == -1)
		return (-1);
	if (text_content)
		write(inhandle, text_content, strlen(text_content));
	close(inhandle);
	return (1);
}
