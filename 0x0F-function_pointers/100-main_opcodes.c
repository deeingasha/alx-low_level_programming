#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the opcodes of its own main function
  *
  * @argc: number of arguments passed
  * @argv: array of argc elements
  *
  * Return:success --> the opcodes
  *            1 --> wrong number of arguments
  *            2 --> negative number of bytes
  */
int main(int argc,char *argv[])
{
	int i;
	int bytes;
	char *mainaddr;

	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}

	bytes = atoi(argv[1]); 
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	mainaddr = (char *)main;

	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", mainaddr[i]);

	printf("%02hhx\n", mainaddr[i]);

	return (0);
}
