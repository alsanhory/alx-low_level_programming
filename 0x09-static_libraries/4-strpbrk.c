#include<stdio.h>
/**
 * _strpbrk - function to check if character is alpha
 * @s: the character to check
 * @accept: to accept
 * Return: 0 always
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while(*s)
	{
		for (i=0; accept[i]; i++)
		{
			if(*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
