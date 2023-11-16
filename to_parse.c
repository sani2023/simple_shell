#include " shell.h"

/**
 * tokenizing - parse user input into arg
 * @string: the string to split into token
 * @delimeter9: the separator
 * Return: array of ptr to the token
 * or if an error
 */
char **tokenizing(char *stn, const char *delimeter9)
{
	char *tokene = NULL;
	char **bck = NULL;
	int y = 0;

	tokene = strtok(stn, delimeter9);
	while (tokene)
	{
		bck = realloc(bck, sizeof(char *) * (y + 1));
		if (bck == NULL)
			return (NULL);

		bck[y] = malloc(string_len(tokene) + 1);
		if (!(bck[y]))
			return (NULL);

		string_cpy(bck[y], tokene);
		tokene = strtok(NULL, delimeter9);
		y++;
/**
 * tokenizing_inpute - split a user input into pieces of char
 * @inpute: char inputed by user
 * Return: NULL if an error or [] of ptr
 */
char **tokenizing_inpute(char *inpute)
{
	char **tokene = NULL;
	char *tempo = NULL;

	tempo = string_up(inpute);
	if (tempo == NULL)
	{
		_puts("The memory alloc fail\n");
		exit(EXIT_FAILURE);
	}

	tokene = tokenizing(tempo, " \t\r\n\a");
	free(tempo);

	return (tokene);
}
