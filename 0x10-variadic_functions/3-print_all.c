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

	va_start(ap, format);
	n = strlen(format);
	while (j < n && format != NULL)
	{
		i = 0;
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			i = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			i = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			i = 1;
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			printf("%s ", s);
			i = 1;
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
