#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints strings
 * @format: string format
 *
 * Return: Always void
 **/
void print_all(const char * const format, ...)
{
	char *s;
	int cnt = 0;
	int lon = 0;
	va_list list;

	va_start(list, format);
	while (format[lon])
	{
		switch (format[lon])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				cnt = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				cnt = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				cnt = 1;
				break;
			case 's':
				s = va_arg(list, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				cnt = 1;
				break;
		}
		lon++;
		if (format[lon] && cnt)
		{
			printf(", ");
			cnt = 0;
		}
	}
	va_end(list);
	printf("\n");
}
