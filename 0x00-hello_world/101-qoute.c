#include <unistd.h>
int main(void)
{
write(1, "UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity\n", 98);
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 62);
return (1);
}
