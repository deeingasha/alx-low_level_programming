#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_all - prints anything
  *
  * @format: list of type of arguments passed to the function
  * c:char, i:int, f:float, s:char *
  *
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *sep = "";

	print_t func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(func[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			func[j].print(ap);
			sep = ", "; /*deals with not having a sep on last one*/
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}

/**
  * print_char - prints a char
  *
  * @ap: object_type holding characters to be printed
  */
void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int); /*got warnings, char promoted to int when passed*/
	printf("%c", c);
}
/**
  * print_int - prints an int
  * @ap: va_list of ints to be printed
  */
void print_int(va_list ap)
{
	int i;

	i = va_arg(ap, int);
	printf("%d", i);
}
/**
  * print_float - prints a float
  * @ap: list of floats to print
  */
void print_float(va_list ap)
{
	float f;

	f = va_arg(ap, double);/*float -> to double when passed through "..."*/
	printf("%f", f);
}
/**
  * print_string - prints a string
  * @ap:list of strings to print
  */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
