#include "shell.h"

/**
 * to_check_d_builtin - check if cmd is a builtin
 * @args: the ar array
 * Return: 1 if cmd is build, 0 otherwise
 */
int to_check_d_builtin(char **args)
{
	if (!args[0])
		return (0);
	if (!string_comp(args[0], "exit"))
		shell_for_exit(args);
	else if (!string_comp(args[0], "env"))
		shell_to_env();
	else if (!string_comp(args[0], "setenv"))
		shell_to_setenv(args);
	else if (!string_comp(args[0], "unsetenv"))
		shell_to_unsetenv(args);
	else if (!string_comp(args[0], "help"))
		shell_for_help();
	else if (!string_comp(args[0], "cd"))
		shell_for_cd(args);
	else if (!string_comp(args[0], "clear"))
		shell_to_clear(args);
	else
		return (0);
	return (1);
}
