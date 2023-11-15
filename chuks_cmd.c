#include "shell.h"

/**
 * read_line - line reader
 *
 * @i_eof:input
 * Return:1 on success
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
