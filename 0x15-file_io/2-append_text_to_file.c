#include "holberton.h"
/**
* append_text_to_file - append to the end of a textfile
* @filename: name of file
* @text_content: content to add to txt file
* Return: 1 on success and -1 on fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int ind;
	int check = open(filename, O_APPEND | O_WRONLY);

	if (check == -1)
		return (-1);

	for (ind = 0; text_content[ind] != '\0'; ind++)
		continue;

	write(check, text_content, ind);

	close(check);
	return (1);
}
