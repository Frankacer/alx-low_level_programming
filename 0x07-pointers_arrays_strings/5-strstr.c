#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to look for.
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}

	return (NULL);
}
