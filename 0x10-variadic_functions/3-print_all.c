#include "variadic_functions.h"
void string(char *s);

/**
 * _strlen - ...
 * @s: ...
 * Return: ...
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0' && s != NULL)
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * print_all - prints anything
 * @format: ...
 */
void print_all(const char *const format, ...)
{
	int i = 0, j = 0, n;
	va_list ap;
	char *s;

	n = _strlen(format);
	va_start(ap, format);
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
			i = 1;
			s = va_arg(ap, char *);
			string(s);
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

/**
 * string - ...
 * @s: ...
 */

void string(char *s)
{
	if (s == NULL)
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", s);
}
