#include "shell.h"

/**
 * find_d_path - look for a comman in specified dir
 * @comman: prt to string comman string for looking
 *
 * Return: ptr to string having d complete path
 * if it is found, NULL otherwise
 */
char find_d_path(char *comman)
{
	struct stat stre;
	int stat_bck, y;
	char buffer1[PATH_MAX_LENGTH], *path, *bck, **dir9;

	path = to_get_d_path();
	if (!path)
		return (NULL);
	dir9 = tokenizing(path, PATH_SEPARATOR);
	if (!dir9)
		return (NULL);
	for (y = 0; dir9[y]; y++)
	{
		d_mem_sett(buffer1, 0, PATH_MAX_LENGTH);
		string_cpy(buffer1, dir9[y]);
		string_cat(buffer1, "/");
		string_cat(buffer1, comman);
		stat_bck = stat(buffer1, &stre);
		if (stat_bck == 0 && S_ISREG(stre.stre_mode) && (stre.stre_mode & S_IXUSR))
				{
					free_d_tokn(dir9);
					bck = malloc(sizeof(char) * (string_len(buffer1) + 1));
					if (!bck)
						return (NULL);
					string_cpy(bck, buffer1);
					return (bck);
				}
	}
	if (stat_bck == -1)
		free_d_tokn(dir9);
	return (NULL);
}

