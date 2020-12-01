#include "holberton.h"
/**
 * set_string - Points to a pointer.
 * @s: Double pointer, that is going to point to "to".
 * @to: pointer that is going to be pointed by "s".
 */
void set_string(char **s, char *to)
{
	*s = to;

}
