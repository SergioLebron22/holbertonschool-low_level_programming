#include <stdio.h>
#include "main.h"

/**
 * _strstr - will locate a substring
 *
 * @haystack: string
 * @needle: substring that we are looking for
 *
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay, *need;

	while (*haystack != '\0')
	{
		hay = haystack;
		need = needle;

		while (*haystack != '\0' && *need != '\0' && *haystack == *need)
		{
			haystack++;
			need++;
		}
		if (!*need)
			return (hay);

		haystack = hay + 1;
	}
	return (0);
}

