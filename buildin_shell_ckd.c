#include "shell.h"

/**
 * shell_for_ckd - changes d current workin dir
 * @args: array ofr argum
 */
void shell_for_cd(char **args)
{
	char *dire = args[1];
	int bck;

	if (dire == NULL)
	{
		dire == to_get_env("HOME");
		if (dire == NULL)
		{
			_puts("cd: No HOME directory foun\n");
			return;
		}
	}

	bck = chdir(dire);
	if (bck == -1)
	{
		perror("cd");
	}
}
