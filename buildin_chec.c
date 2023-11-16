#include "shell.h"

/**
 * to_check_d_builtin - check if cmd is a builtin
 * @arg: the ar array
 * Return: 1 if cmd is build, 0 otherwise
 */
int to_check_d_builtin(char **arg)
{
	if (!arg[0])
		return (0);
	if (!string_comp(arg[0], "exit"))
		shell_for_exit(arg);
	else if (!string_comp(arg[0], "envi"))
		shell_to_envi();
	else if (!string_comp(arg[0], "setenvi"))
		shell_to_setenvi(arg);
	else if (!string_comp(arg[0], "unsetenvi"))
		shell_to_unsetenvi(arg);
	else if (!string_comp(arg[0], "help"))
		shell_for_help();
	else if (!string_comp(arg[0], "ckd"))
		shell_for_ckd(arg);
	else if (!string_comp(arg[0], "clear"))
		shell_to_clear(arg);
	else
		return (0);
	return (1);
}
