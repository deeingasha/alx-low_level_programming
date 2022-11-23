#include "main.h"

/**
  * string_nconcat - concatenates two strings
  *
  * @s1: the first string
  * @s2: the second string
  * @n: how many bytes of s2 to add to s1
  *
  * Return: SUCCESS --> pointer to the concatenated string
  *            FAIL --> NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cs;
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	if (len2 <= n)
		n = len2;

	cs = malloc(sizeof(char) * (len1 + n + 1));
	if (cs == NULL)
		return (NULL);

	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		cs[i + j] = s1[i];
	for (j = 0; j < n; j++)
		cs[i + j] = s2[j];

	cs[i + j] = '\0';
	return (cs);
}
