#include "shell.h"

/**
 * to_get_d_path - return d value of envi path var
 *
 * Return: ptr to d value of path
 */
char *to_get_d_path(void)
{
	return (to_get_envi("PATH"));
}
