#include "shell.h"

/**
 * shell_for_ckd - changes d current workin dir
 * @arg: array ofr argum
 */
void shell_for_ckd(char **arg)
{
	char *dire = arg[1];
	int bck;

	if (dire == NULL)
	{
		dire == to_get_envi("HOME");
		if (dire == NULL)
		{
			_puts("ckd: No HOME directory foun\n");
			return;
		}
	}

	bck = chdir(dire);
	if (bck == -1)
	{
		_puterro("ckd");
	}
}
