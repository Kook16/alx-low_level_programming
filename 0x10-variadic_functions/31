#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: ...
 */

void print_all(const char *const format, ...)
{
	int n, i = 0, j = 0;
	va_list ap;
	char *s;
	char *seperator = "";

	va_start(ap, format);
	n = strlen(format);
	while (j < n && format != NULL)
	{
		i = 0;
		switch (format[j])
		{
		case 'c':
			printf("%s%c", seperator, va_arg(ap, int));
			i = 1;
			break;
		case 'i':
			printf("%s%d", seperator, va_arg(ap, int));
			i = 1;
			break;
		case 'f':
			printf("%s%f", seperator, va_arg(ap, double));
			i = 1;
			break;
		case 's':
			i = 1;
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("%s%s", seperator, "(nil)");
				break;
			}
			printf("%s%s", seperator, s);
			break;
		default:
			break;
		}
		if (j != (n - 1) && i == 1)
			printf(", ");
		j++;
	}
	va_end(ap);
	printf("\n");
}
