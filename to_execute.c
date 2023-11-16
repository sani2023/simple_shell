#include "sehll"
/**
 * to_execute - executing comman with argument
 * @argv: array of string containing the comman & its arg
 * Return: exit status of the comman
 */
int to_execute(char **argv)
{
	pid_t idi;
	int statuss = 0;
	char *cmd_path2, *envp2[2];

	if (argv == NULL || *argv == NULL)
		return (statuss);
	if (to_check_d_builtin(argv))
		return (statuss);
	idi = fork();
	if (idi < 0)
	{
		_puterror("fork");
		return (1);
	}
	if (idi == -1)
	{
		perror(argv[0]), free_d_tokn(argv),
			free_d_last_input();
			exit(EXIT_FAILURE);
	}
	if (idi == 0)
	{
		envp2[0] = to_get_d_path();
		envp2[1] = NULL;
		cmd_path2 = NULL;
		if (argv[0][0] != '/')
			cmd_path2 = find_d_path(argv[0]);
		if (cmd_path2 == NULL)
			cmd_path2 = argv[0];
		if (execve(cmd_path2, argv, envp2) == -1)
		{
			perror(argv[0]), free_d_tokn(argv),
				free_d_last_input();
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		do {
			waitpid(idi, &statuss, WUNTRACED);
		} while (!WIFEXITED(statuss) && !WIFSIGNALED(statuss));
	}
	return (statuss);
}
