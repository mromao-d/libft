#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c)
{
    unsigned char   d;

    d = (unsigned char) c;
    while (d >= 48 && d <= 57)
        return (1);
    return (0);
}

int main(void)
{
    printf("%d\n", isdigit(57));
    printf("%d\n", ft_isdigit(57));
    return (0);
}