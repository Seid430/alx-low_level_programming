#include "main.h"
/**
 *_isalpha - checks if the letter is an alphabet
 *@c: letter
 *Return: 0
 */
int _isalpha(int c)

{
		if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
				{return (1);
						}
			return (0);
}
