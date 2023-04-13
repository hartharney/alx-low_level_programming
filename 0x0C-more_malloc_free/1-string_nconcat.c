#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: suffix string
 * @s2: prefix string
 * @n: the maximum number of bytes from s2 to concatenate
 *
 * Return: pointer (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i, j;

	for (i = 0; s1 && s1[i]; i++)
		len1++;
	for (i = 0; s2 && s2[i]; i++)
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = len1, j = 0; n < len2 && i < (len1 + n); i++, j++)
	{
		s[i] = s2[j];
	}
	for (j = 0; n >= len2 && i < (len1 + len2); i++, j++)
	{
		s[i] = s2[j];
	}
	s[i] = '\0';
	return (s);
}
