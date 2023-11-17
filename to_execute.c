#include "shell.h"

/**
 * executes_comand - to execute cmd
 * @comand: command given
 * Return: NULL
 */

void executes_comand(const char *comand)
{
	pid_t children_pid = fork();

	if (children_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	} else if (children_pid == 0)
	{
		execlp(comand, comand, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	} else if
	{
		wait(NULL);
	}
}
