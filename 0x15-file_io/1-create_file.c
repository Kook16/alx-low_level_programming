#include "main.h"
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
	inhandle = open(filename, O_CREAT, S_IRUSR | S_IWUSR);
	if (inhandle == -1)
		return (-1);
	if (text_content)
		write(inhandle, text_content, strlen(text_content));
	close(inhandle);
	return (1);
}
