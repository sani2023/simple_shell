#include "shell.h"

/**
 * string_len - rtrn length of strng
 * @t: for checking the length
 *
 * Return: int length of strng
 */
int string_len(const char *t)
{
	int y = 0;

	if (!t)
		return (0);

	while (*t++)
		y++;
	return (y);
}

/**
 * string_comp - to compare 2 strings
 * @g1: 1st strn to comp
 * @g2: 2nd strn to comp
 * Return: 0 if p1 & p2 are equal
 */
int string_comp(const char *g1, const char g2)
{
	while (*g1 != '\0' && *g2 != '\0' && *g1 == *g2)
	{
		g1++;
		g2++;
	}
	return ((int) (*g1) - (*g2));
}

/**
 * string_ncomp - comp 2 strn up to specified nbr
 * @g1: 1st strn for comparison
 * @g2: 2nd strn for comparison
 * @m: maximum
 * Return: 0 if strn = up to m char
 */
int string_ncomp(const char *g1, const char *g2, size_t m)
{
	unsigned char k1, k2;

	while (m-- > 0)
	{
		k1 = (unsigned char) *g1++;
		k2 = (unsigned char) *g2++;

		if (k1 != k2)
			return (k1 - k2);
		if (k1 == '\0')
			break;
	}
	return (0);
}

/**
 * string_str - checks if needle start with
 * @hack: str to search
 * @needl: to find the substrin
 * Return: address of next char hack
 */
char *string_str(char *hack, char *needl)
{
	int y;

	for (y = 0; hack[y] != '\0'; y++)
	{
		if (hack[y] == needl[0])
		{
			int g;

			for (g = 0; needl[g] != '\0'; g++)
			{
				if (hack[y + g] != needl[g])
				{
					break;
				}
			}
			if (needl[g] == '\0')
			{
				return (&hack[y]);
			}
		}
	}
	return (NULL);
}

/**
 * string_char - fnc dad locate a char
 * @t: pntr to our strn array
 * @z: char to locate input array
 * Return: 1st happen or char or null
 */
char string_char(char *t, char z)
{
	while (*t != '\0')
	{
		if (*t == z)
			return (t);
		t++;
	}

	if (*t == z)
		return (t);

	return (NULL);
}

