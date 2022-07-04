#include <stdio.h>

/**
 * main - Prints the name of the file
 * 
 * @return: always success
 */
int main(void)
{
    printf("%s\n",__BASE_FILE__);
    return (0);
}