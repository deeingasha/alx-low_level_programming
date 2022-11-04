#include "main.h"
#include "main.h"

/*declare functions so code will work*/
int find_strlen(char *s);
int check_palindrome(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 *
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}
/**
  * is_palindrome - checks if a string is a palindrome or not
  *
  * @s: string to check
  *
  * Return: if s is a palindrome --> 1.
  *       if s isn't a palindrome --> 0.
  */
int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
