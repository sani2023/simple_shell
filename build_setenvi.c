#include "shell.h"

/**
 * shell_for_setenvi - set d val env var
 * @arg: argum
 * Return: NUll
 */
int shell_for_setenvi(char **arg)
{
	char *name9, *valu9;

	if (arg[1] == NULL || arg[2] == NULL)
	{
		_puterro("Usage: setenv VARIABLE VALUE\n");
		return (-1);
	}

	name9 = arg[1];
	valu9 = arg[2];

	if (setenv(name9, valu9, 1) != 0)
	{
		_puterro("setenvi");
		return (-1);
	}
	return (0);
}

/**
 * shell_to_unsetenvi - unset an envi
 * @arg: argumen
 * Return: nothing
 */
int shell_to_unsetenvi(char **arg)
{
	char *name9;

	if (arg[1] == NULL)
	{
		_puterro("Usage: unsetenvi VARIABLE\n");
		return (-1);
	}

	name9 = arg[1];

	if (unsetenv(name9) != 0)
	{
		_puterro("unsetenvi");
	}
	return (0);
}
