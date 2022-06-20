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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
