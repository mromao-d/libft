#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    c = (unsigned char) c;
    if (c >= 97 && c <= 122)
        return (c - 32);
    return (c);
}

int main(void)
{
    int i;

    i = 0;
    while (i++ <= 200)
        printf("the toupper of the number %d\t is %d\t, %d\n", i, toupper(i), ft_toupper(i));
    return (0);
}