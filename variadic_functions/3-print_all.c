#include <stdio.h>
#include <stdarg.h>
/**
 * print - function that prints strings
 * @format: string format
 * @lon: size of format
 * @cnt: mark of print
 * @s: pointer
 * @list: arguments
 *
 * Return: Always void
 **/
void print(const char *format, int lon, int cnt, char *s, va_list list)
{
	while (format[lon])
	{
		switch (format[lon])
		{
			case 'i':
				printf("%d", va_arg(list, int));
				cnt = 1;
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				cnt = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				cnt = 1;
				break;
			case 's':
				s = va_arg(list, char*);
				cnt = 1;
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		lon++;
		while (format[lon] && cnt)
		{
			printf(", ");
			cnt = 0;
		}
	}
}
/**
 * print_all - function that prints strings
 * @format: string format
 *
 * Return: Always void
 **/
void print_all(const char * const format, ...)
{
	char *s = NULL;
	int cnt = 0;
	int lon = 0;
	va_list list;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(list, format);
	print(format, lon, cnt, s, list);
	va_end(list);
	printf("\n");
}
