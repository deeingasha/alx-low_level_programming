#include "main.h"
#include <stdio.h>
/**
  * _puts - prints a string, followed by a new line to stdout
  *
  * @str: string to be printed
  *
  * Return: nothing
  */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
/**
  * main - multiplies two positive numbers
  *
  * @argc: number of arguments passed to main
  * @argv: array of argc elements
  *
  * Return: SUCCESS --> the results followed by new line
  *          98 --> incorrect number of args, or arguments not digits
  */
int main(int argc, char *argv[])
{
/*	int result;*/
	int num1, num2;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	return (num1 * num2);
/*
  * check if digits
  * multiply and print without printf
  *
  *
  */
}
