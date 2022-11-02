#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c)
{
    c = (unsigned char) c;
    if (c >= 65 && c <= 90)
        return (c + 32);
    return (c);

}

int main(void)
{
    int i;

    i = 0;
    while (i++ <= 200)
        printf("the tolower of the number %d\t is %d\t, %d\n", i, tolower(i), ft_tolower(i));
    return (0);
}