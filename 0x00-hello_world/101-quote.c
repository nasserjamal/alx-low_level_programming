#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints out the result
 *
 * Return: returns 1 As the output
 */
int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar,\
2015-10-19\n";

	write(2, msg, sizeof(msg));
	fprintf(stderr,"");
	return (1);
}
