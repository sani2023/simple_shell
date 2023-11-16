#include "shell.h"

/**
 * shell_for_exit - exit d sehll
 * @arg: argum
 * Return: NULL
 */
void shell_for_exit(char **arg)
{
	int statuss = 0;

	if (arg[1] != NULL)
	{
		statuss = d_atoi(arg[1]);
	}
	free_d_tokn(arg);
	free_d_last_input();
	exit(statuss);
}
