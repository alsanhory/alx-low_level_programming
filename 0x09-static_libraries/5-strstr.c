#include "main.h"
#include<stdio.h>
/**
 * _strstr - the entry for the program
 * @haystack: pointer to variable
 * @needle: staring point for the array
 * Return: the number of len on sucess
 */
char *_strstr(char *haystack, char *needle)
{
	char *first, *str;
	while (*haystack)
	{
		first = haystack;
		str = needle;

		while (*str && *haystack == *str)
		{
			haystack++;
			str++;
		}
		if (*str == '\0')
		{
			return (first);
		}
		haystack = first + 1;
	}
	return (NULL);
}
