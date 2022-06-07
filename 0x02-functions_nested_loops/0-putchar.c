#include "_putchar.c"
/**
 * main - this is the main file
 *
 * Return: return success always
 */
int main(void)
{	char word[]="_putchar\n";
	int i=0;

	while( i< 8){
		_putchar(word[i]);
		i++;
	}
	return (0);
}
