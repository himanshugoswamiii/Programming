#include <unistd.h>
#include <string.h>
int main ()
{
    const char *str = "Hello World!\n";

    write(1, str, strlen(str));
    return 0;
}
