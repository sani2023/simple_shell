#include "shell.h"

/**
 * to_get_env - get value of envi var
 * @name9: name of envi var
 *
 * Return: val of envi var, NULL not exist
 */
char *to_get_env(const char *name9)
{
	char **envi;
	size_t name_length = string_len(name9);

	for (envi = environ; *envi != NULL; envi++)
	{
		if (string_ncomp(*envi, name9, name_length) == 0
				&& (*envi)[name_length] == '=')
		{
			return (&(*envi)[name_length + 1]);
		}
	}

	return (NULL);
}
