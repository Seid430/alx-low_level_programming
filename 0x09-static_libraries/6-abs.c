#include "main.h"
/**
 * _abs - absolute value
 * @c: number
 * Return: the value
 */
int _abs(int c)
{
int abs_val;
if (c < 0)
{abs_val = c * -1;
return (abs_val);
}
return (c);
}
