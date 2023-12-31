#include "main.h"

/**
 * select_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */

int (*select_print(char s))(va_list, flags_tag *)
{
	spf func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
	};

	int flags = 4;

	register int i;

	for (i = 0; i < flags; i++)
	{
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	}
	return (NULL);
}
