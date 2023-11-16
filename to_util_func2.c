#include "shell.h"

/**
 * d_atoi - convert a strn to an int
 * @string: strn to be converted
 * Return: the int valu of the strn
 */
int d_atoi(const char *string)
{
	int y, signe;
	unsigned int numb;

	y = 0;
	signe = 1;
	numb = 0;

	while (string[y] != '\0')
	{
		if (string[y] == '-')
			signe *= -1;
		else if (string[y] >= '0' && string[y] <= '9')
			numb = (numb * 10) + (string[y] - '0');
		else
			break;
		y++;
	}
	return (numb * signe);
}

/**
 * d_mem_sett - fills mem with const
 * @x: the ptr to d mem area
 * @u: d byte to fill *x with
 * @m: the amnt of byte to be filled
 * Return: x a ptr to d mem area x
 */
char *d_mem_sett(char *x, char u, unsigned int m)
{
	unsigned int y;

	for (y = 0; y < m; y++)
		x[y] = b;
	return (x);
}

/**
 * d_mem_copy - copy mem area
 * @destin: buff where we will copy to
 * @sourc: wht we r to cpy
 * @m: byte of @sourc
 * Return: Always 0 on success
 */
char *d_mem_copy(char *destin, char *sourc, unsigned int m)
{
	unsigned int y;

	for (y = 0; y < m; y++)
		destin[y] = sourc[y];
	return (destin);
}

/**
 * to_realloc - realloc a blck of mem
 * @point: ptr to prev malloc blck
 * @old_size9: byte size of prev blck
 * @new_size9: byte size of new blck
 * Return: ptr to d old blck
 */
void *to_realloc(void *point, unsigned int old_size9,
		unsigned int new_size9)
{
	char *w;

	if (!point)
		return (malloc(new_size9));
	if (!new_size9)
		return (free(point, NULL);
	if (new_size9 == old_size9)
	return (point);

	w = malloc(new_size9);
	if (!w)
	return (NULL);

	old_size9 = old_size9 < new_size ? old_size : new_size9;
	while (old_size9--)
	w[old_size9] = ((char *)point)[old_size9];
	free(point);
	return (w);
}

/**
 * to_calloc -  fun dad allocate
 * @membn: size of array
 * @size9: size of each element
 * Return: point wit nw alloca mem
 */
void *to_alloc(unsigned int membn, unsigned size9)
{
	char *w;

	if (membn == 0 || size == 0)
		return (NULL);

	w = malloc(membn * size9);
	if (w == NULL)
		return (NULL);

	d_mem_sett(w, membn * size9);

	return (w);
}

