#include "shell.h"

/**
 * main - implementing a smple shell
 *
 * Return: EXIT_SUCCESS
 */

int main(void)
{
	char *inpute;
	char **args;
	int statuss;

	signal(SIGINT, handle_d_signaint);
	signal(SIGQUIT, handle_d_signaquit);
	signal(SIGTSTP, handle_d_signastp);

	do {
		inpute = get_d_input();
		if (!inpute || !*inpute)
			break;

		args = tokenizing_inpute(inpute);
		if (!args || !*args)
		{
			free(inpute);
			free_d_tokn(args);
			continue;
		}

		statuss = execute(args);
		free(inpute);
		free_d_tokn(args);

		statuss = 1;

	} while (statuss);

	return (EXIT_SUCCESS);
}
