#include <stdio.h>
#include <string.h>
/**
 * _strlen - count number of case in array
 * @s: string to count
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * is_palindrome - check if is s a palindrome
 * @s: strinf to check
 * Return: 0 if false 1 if true
 */
int check_palindrome(char *s,int i, int j)
{
	if (j <= i)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (check_palindrome(s, i + 1, j - 1));
}
int is_palindrome(char *s)
{
	int i = 0;
        int j = _strlen(s) - 1;
	
	if (s == NULL || _strlen(s) == 0)
		return (1);
	return (check_palindrome(s, i, j));
}
