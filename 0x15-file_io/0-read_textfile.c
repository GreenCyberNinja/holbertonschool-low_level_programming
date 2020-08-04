#include "holberton.h"
/**
* read_textfile - reads a file and prints it
* @filename: name of the file to read
* @letters: the amount of charcters to print
* Return: amount printed or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	size_t rb, pb = 0;
	int red = open(filename, O_RDONLY);

	if (red == -1)
		return (0);

	while ((rb = read(red, &c, sizeof(c))) > 0)
	{
		if (pb < letters)
			pb += write(STDOUT_FILENO, &c, sizeof(c));
	}
	close(red);
	return (pb);
}
