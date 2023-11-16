#include "shell.h"

/**
 * main - implementing a smple shell
 *
 * Return: EXIT_SUCCESS
 */

int main(void)
{
	char *inpute;
	char **arg;
	int statuss;

	signal(SIGINT, handle_d_signaint);
	signal(SIGQUIT, handle_d_signaquit);
	signal(SIGTSTP, handle_d_signastp);

	do {
		inpute = get_d_line();
		if (!inpute || !*inpute)
			break;

		arg = tokenizing_inpute(inpute);
		if (!arg || !*arg)
		{
			free(inpute);
			free_d_tokn(arg);
			continue;
		}

		statuss = to_execute(arg);
		free(inpute);
		free_d_tokn(arg);

		statuss = 1;

	} while (statuss);

	return (EXIT_SUCCESS);
}
