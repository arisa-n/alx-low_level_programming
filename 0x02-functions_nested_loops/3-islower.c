#include<stdio.h>
#include"main.h"
/**
<<<<<<< HEAD
* _islower - Shows 1 if the input is a
* lowercase character. Another cases, shows 0
* @c: The character in ASCII code
* Return: 1 for lowercase. 0 for the rest.
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
=======
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
>>>>>>> 7ae87301f5a2f9c802e7e1ac5aa7ac561aae94e7
}
