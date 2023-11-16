#include "shell.h"

/**
 * get_d_line - read input from stdin
 * Return: string inserted by user
 */
void *get_d_line(void)
{
	static char buff[BUFFER_SIZE];
	static int buff_pos2, buff_size;
	char *inputed_strn = NULL;
	char curren_chr;
	int inpute_len = 0;

	while (1)
	{
		if (buff_pos2 >= buff_size)
		{
			buff_size = read(STDIN_FILENO, buff, BUFFER_SIZE);
			buff_pos2 = 0;
			if (buff_size == 0)
				return (inputed_strn);
			else if (buff_size < 0)
			{
				perror("read");
				return (NULL);
			}
		}
		curren_chr = buff[buff_pos2];
		buff_pos2++;

		if (curren_chr == '\n')
		{
			inputed_strn = realloc(inputed_strn, inpute_len + 1);
			inputed_strn[inpute_len] = curren_chr;
			inpute_len++;
		}
	}
}
