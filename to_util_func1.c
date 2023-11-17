#include "shell.h"

/**
 * string_cpy - to cpy a string
 * @destin: the place to take the string
 * @sourc: from where it was
 * Return: ptr to desti
 */
char *string_cpy(char *destin, char *sourc)
{
	int y = 0;

	if (destin == sourc || sourc == 0)
		return (destin);
	while (sourc[y])
	{
		destin[y] = sourc[y];
		y++;
	}
	destin[y] = 0;
	return (destin);
}

/**
 * string_cat - concatenate 2 characters
 * @destin: the place to the str
 * @sourc: from where it was
 * Return: ptr to destin
 */
char *string_cat(char *destin, const char *sourc)
{
	char *bck = destin;

	while (*destin)
		destin++;
	while (*sourc)
		*destin++ = *sourc++;
	*destin = *sourc;
	return (bck);
}

/**
 * string_up - to double d string
 * @stn: strn to double
 * Return: ptr to d dbl strin
 */
char *string_up(const char *stn)
{
	int leng = 0;
	char *bck;

	if (stn == NULL)
		return (NULL);
	while (*stn++)
		leng++;
	bck = malloc(sizeof(char) * (leng + 1));
	if (!bck)
		return (NULL);
	for (leng++; leng--;)
		bck[leng] = *--stn;
	return (bck);
}

/**
 * _putchar - printing a char z to terminal
 * @z: the char to print
 * Return: 1 if success
 * -1 if error
 */
int _putchar(char z)
{
	return (write(1, &z, 1));
}

/**
 * string_pn - func dat get d leng of prfx
 * @g: ptr to strn inserted
 * @acc: substrn prfx to lk 4
 * Return: nbr of bytes
 */
unsigned int string_pn(char *g, char *acc)
{
	unsigned int y, l;

	for (y = 0; g[y]; y++)
	{
		for (l = 0; acc[l]; l++)
		{
			if (g[y] == acc[l])
				break;
		}
		if (!acc[l])
			return (y);
	}

	return (y);
}
