#include "shell.h"

/**
 * shell_for_exit - exit d sehll
 * @args: argum
 * Return: NULL
 */
void shell_for_exit(char **args)
{
	int statuss = 0;

	if (args[1] != NULL)
	{
		statuss = d_atoi(args[1]);
	}
	free_d_tokn(args);
	free_d_last_input();
	exit(statuss);
}
