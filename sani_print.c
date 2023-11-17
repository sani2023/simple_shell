#include "shell.h"

/**
 * sani_print - print to stdout
 * @sms: message
 * return: NULL
 */
void sani_print(const char *sms)
{
	write(STDOUT_FILENO, sms, strlen(sms));
}
