#include "shell.h"

/**
 * string_len - rtrn length of strng
 * @g: for checking the length
 *
 * Return: int length of strng
 */
int string_len(const char *g)
{
	int y = 0;

	if (!g)
		return (0);

	while (*g++)
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
 * @haystack: str to search
 * @needle: to find the substrin
 * Return: address of next char hack
 */
char *string_str(char *haystack, char *needle)
{
	int y;

	for (y = 0; haystack[y] != '\0'; y++)
	{
		if (haystack[y] == needle[0])
		{
			int l;

			for (l = 0; needl[l] != '\0'; l++)
			{
				if (haystack[y + l] != needle[l])
				{
					break;
				}
			}
			if (needle[l] == '\0')
			{
				return (&haystack[y]);
			}
		}
	}
	return (NULL);
}

/**
 * string_char - fnc dad locate a char
 * @g: pntr to our strn array
 * @z: char to locate input array
 * Return: 1st happen or char or null
 */
char string_char(char *g, char z)
{
	while (*g != '\0')
	{
		if (*g == z)
			return (g);
		g++;
	}

	if (*g == z)
		return (g);

	return (NULL);
}

