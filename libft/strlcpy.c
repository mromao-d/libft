#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[10] = "nome";

    printf("The real result of strlcpy is: %lu\n", strlcpy("o meu nome é Manuel", "Manuel", sizeof(buf)));
    return (0);
} 