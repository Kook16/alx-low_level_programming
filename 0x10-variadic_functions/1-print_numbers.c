#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: ....
 * @n: ...
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;


	if (n > 0)
	{
		va_start(pa, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(pa, int));
			if (i != (n - 1) && seperator != NULL)
				printf("%s", seperator);
		}
		va_end(pa);
	}

	printf("\n");
}
