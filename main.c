#include "shell.h"

/**
 * main - main function source file
 * Return: 0 if success
 */

int main(void)
{
	char comand[COMMAND_MAX_LENGTH];

	do {
		showing_prompt();
		getting_input(comand, sizeof(comand));
		executes_comand(comand);
	} while (1);

	return (0);
}
