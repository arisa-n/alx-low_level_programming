#include"main.h"
/**
 * _strstr - locate a substring
 * @haystack: The string to search
 * @needle: The substring to search for
 * Return: pointer to the first occurrence of @needle in @haystack
 * or NULL if @needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
