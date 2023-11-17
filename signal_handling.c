#include "shell.h"

/**
 * handle_d_signaint - function for handling signal
 * @signa: number of signal
 *
 * Return: Null
 */
void handle_d_signaint(int signa)
{
	(void) signa;
	_putchar('\n');
	prompt();
}

/**
 * handle_d_signaquit - handling sigquit
 * @signa: number of signal
 *
 * Return: Null
 */
void handle_d_signaquit(int signa)
{
	(void) signa;
	_puterror("Quit (core dumped)\n");
	exit(EXIT_SUCCESS);
}

/**
 * handle_d_signastp - fn for handling ctrl + Z
 * @signa: number of signal
 *
 * Return: Null
 */
void handle_d_signastp(int signa)
{
	(void) signa;
	_puts("\n");
	prompt();
}
