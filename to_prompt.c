#include "shell.h"

/**
 * prompt - func taht print to sdin
 * Return: empty
 */

void prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
