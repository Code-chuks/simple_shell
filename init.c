#include "shell.h"

/**
 * get_sigint - sigin
 * @sig: sign
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
