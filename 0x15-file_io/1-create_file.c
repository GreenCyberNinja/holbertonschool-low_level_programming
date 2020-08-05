#include "holberton.h"
/**
* create_file - creates a file with input text, truncats if file created
* @filename: the name of file
* @text_content: the contents of the file
* Return: 1 0n success -1 on fail
*/
int create_file(const char *filename, char *text_content)
{
	size_t ind;
	int check = creat(filename, 0600);

	if (check == -1)
		return (-1);

	for (ind = 0; text_content[ind] != '\0'; ind++)
		continue;

		write(check, text_content, ind);

	close(check);
	return (1);
}
