#include <string.h>
#include <stdio.h>

int main(void)
{
    printf("%d\n", memcmp("abcdef", "abcdef", 5));
    return (0);
}