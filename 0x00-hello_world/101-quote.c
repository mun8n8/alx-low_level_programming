#include <unistd.h>
/**
 * main - Prints a quote to standard error
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
write(1, "UNIX is basically a simple operating system, but you have\n"
"to be a genius to understand the simplicity\n", 122);
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 62);
return (1);
}
