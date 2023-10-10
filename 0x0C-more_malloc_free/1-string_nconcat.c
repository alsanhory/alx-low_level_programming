#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - the main function
 * @s1: the first
 * @s2: the second
 * @n: the arugments count
 * Return: 0 on sucess
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len1 = 0, len2 = 0;
	unsigned int total_len;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	total_len = len1 + n;
	res = malloc(total_len + 1);

	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < n && j < len2; j++)
	{
		res[i + j] = s2[j];
	}
	res[i + j] = '\0';

	return (res);
}
