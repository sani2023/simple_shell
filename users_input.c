#include "shell.h"

/**
 * reads_comand - funct for reading cmd
 * @comand: input command
 * @sise: size of cmd
 * Return: NULL
 */
void reads_comand(char *comand, size_t sise)
{
	if (fgets(comand, sise, stdin) == NULL)
	{
		if (feof(stdin))
		{
			sani_print("\n");
			exit(EXIT_SUCCESS);
		} else
		{
			sani_print("Eror while reading inputs.\n");
			exit(EXIT_FAILURE);
		}
	}
	comand[strspn(comand, "\n")] = '\0';
}
