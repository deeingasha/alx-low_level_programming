#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes per line, starting with
 *                the first byte position in hex, then showing the hex content,
 *                then displaying printable characters.
 *
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed.
 *
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int i;
	int bytes;

	for (bytes = 0; bytes < size; bytes += 10)
	{
		printf("%08x: ", bytes);

		for (i = 0; i < 10; i++)
		{
			if ((i + bytes) >= size)
				printf(" ");
			else
				printf("%02x", *(b + i + bytes));
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		/**
		  * more formatting
		  * figure it out
		  */
	}
		if (size <= 0)
			printf("\n");
}
