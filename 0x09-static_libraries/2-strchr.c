#include "main.h"
/**
 *_strchr - find a character in a string
 *@s:string
 *@c:character
 *Return:character
 */
char *_strchr(char *s, char c)
{
	int content;


	for (content = 0; s[content] >= '\0'; content++)
	{
		if (s[content] == c)
			return (&s[content]);
	}
	return (0);
}
