#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - will append text to end of file
 *
 * @filename: name of file
 * @text_content: text being appended
 *
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len = 0;
	int inlen = 0;
	char *str;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (inlen = 0, str = text_content; *str; str++)
		{
			inlen++;
		}
		len = write(file, text_content, inlen);
	}

	if (close(file) == -1 || inlen != len)
		return (-1);

	return (1);
}

