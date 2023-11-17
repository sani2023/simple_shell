#include "shell.h"
build_setenvi.c
/**
 * shell_for_setenvi - set d val env var
 * @args: argum
 * Return: NUll
 */
int shell_for_setenv(char **args)
{
	char *name9, *valu9;

	if (args[1] == NULL || args[2] == NULL)
	{
		_puterror("Usage: setenv VARIABLE VALUE\n");
		return (-1);
	}

	name9 = args[1];
	valu9 = args[2];

	if (setenv(name9, valu9, 1) != 0)
	{
		_puterror("setenv");
		return (-1);
	}
	return (0);
}

/**
 * shell_to_unsetenvi - unset an envi
 * @args: argumen
 * Return: nothing
 */
int shell_to_unsetenv(char **args)
{
	char *name9;

	if (args[1] == NULL)
	{
		_puterror("Usage: unsetenv VARIABLE\n");
		return (-1);
	}

	name9 = args[1];

	if (unsetenv(name9) != 0)
	{
		_puterror("unsetenv");
	}
	return (0);
}
