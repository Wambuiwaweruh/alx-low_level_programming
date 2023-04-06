#include "main.h"
int palindrome_scanner(char *s, int freq, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is  palindrome
 * @s:string to be checked
 * Return:interger
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome_scanner(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - checks length of the string
 * @s: string to be checked
 * Return: interger
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_scanner - checks the characters recursively for palindrome
 * @s: string to be checked
 * @b: checks its frequency
 * @length: length of the string
 * Return:interger
 */
int palindrome_scanner(char *s, int b, int length)
{
	if (*(s + b) != *(s + length - 1))
		return (0);
	if (b >= length)
		return (1);
	return (palindrome_scanner(s, b + 1, length - 1));
}
