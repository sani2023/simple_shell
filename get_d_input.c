#include "shell.h"

static char *d_last_inpute;
/**
 * get_d_input - read wat entered by user
 * Return: ptr to a container containing d useer input
 */
char *get_d_input(void)
{
	char *inpute = NULL;
	size_t inpute_size = 0;
	ssize_t new_read;

	do {
		to_prompt();
		new_read = getline(&inpute, &inpute_size, stdin);

		if (new_read == -1)
		{
			free(inpute);
			_puts("\n");
			return (NULL);
		}
		inpute[new_read - 1] = '\0';
	} while (inpute[0] == '\0' || isspace(inpute[0]));
	d_last_inpute = inpute;
	return (inpute);
}

/**
 * free_d_last_input - free entered input bu usr
 * Return: always NULL
 */
void free_d_last_input(void)
{
	free(d_last_inpute);
	d_last_inpute = NULL;
}
