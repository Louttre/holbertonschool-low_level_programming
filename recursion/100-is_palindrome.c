#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - check if is s a palindrome
 * @s: strinf to check
 * Return: 0 if false 1 if true
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;

	while (i <= j)
	{
		if (s[i] == s[j])
		{
			i++;
			j--;
		}
		else
			return (0);
	}
	return (1);
}
