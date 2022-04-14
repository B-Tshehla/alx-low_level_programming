#include "main.h"
/**
* _isdigit - "checks for a digit"
* @c: "The number to be checked"
*
* Return: "1 if the number is a digit, 0 if its not"
*/
int _isdigit(int c)
{
	if (c <= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
