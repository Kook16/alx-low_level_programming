#include "main.h"

/**
 * _strlen - ....
 * @p: ...
 * Return: ...
 */
int _strlen(char *p)
{
	int len = 0;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	return (len);
}
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
	inhandle = open(filename, O_WRONLY | O_APPEND);
	if (inhandle == -1)
		return (-1);
	if (text_content)
		write(inhandle, text_content, _strlen(text_content));
	close(inhandle);
	return (1);
}
