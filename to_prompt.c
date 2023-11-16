#include "shell.h"

/**
 * to_prompt - func taht print to sdin
 * Return: empty
 */

void to_prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
