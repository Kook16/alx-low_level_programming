#include "variadic_functions.h"

/**
 * print_strings - prints string followed by a new line
 * @seperator: ...
 * @n: ...
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list pa;

	va_start(pa, n);
	if (seperator != NULL && n != 0)
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(pa, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			if (i != (n - 1))
				printf("%s", seperator);
		}
		printf("\n");
	}
	va_end(pa);
}
