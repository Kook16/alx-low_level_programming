#include "main.h"

/**
 * _strlen - ....
 * @p: ....
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
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 * Return: ...
 */

int create_file(const char *filename, char *text_content)
{
	int inhandle;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	inhandle = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (inhandle == -1)
		return (-1);
	if (text_content)
		write(inhandle, text_content, _strlen(text_content));
	close(inhandle);
	return (1);
}
