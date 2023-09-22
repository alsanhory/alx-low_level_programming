#include "main.h"
#include<stdio.h>
/**
 * *string_toupper - the entry for the program
 * @str: pointer to variable
 * Return: the number of len on sucess
 */
char *string_toupper(char *str)
{
	char *mychar = str;

	while (*mychar != '\0')
	{
		if (*mychar >= 'a' && *mychar <= 'z')
		{
			*mychar = *mychar - 'a' + 'A';
		}
		mychar++;
	}
	return (str);
}
