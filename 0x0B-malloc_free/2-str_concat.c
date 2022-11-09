#include "main.h"
#include <stdlib.h>

/**
  * str_concat - cancatenates two strings
  *
  *
  * @s1: first string
  * @s2: string to add to s1
  *
  * Return: success --> pointer to concatenated string
  *         failure --> NULL
  */
char *str_concat(char *s1, char *s2)
{
	char *cs;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s1[j] != '\0'; j++)
		len2++;

	cs = malloc(sizeof(char) * (len1 + len2 + 1));

	if (cs == NULL)
		return (NULL);

	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		cs[i + j] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		cs[i + j] = s2[j];

	cs[i + j] = '\0';
	return (cs);
}
