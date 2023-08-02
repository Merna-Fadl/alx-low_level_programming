#include <stdio.h>
#include "main.h"
/**
 * last_index - function that returns 1 if a string is a palindrome
 * @s: strig
 * Return: 1 if palindrome
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
 * is_palindrome - return 1 if palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - function
 * @s: string
 * @start: start of value
 * @end: end of value
 * @mod: value
 * Return: 0 or 1
 */
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
