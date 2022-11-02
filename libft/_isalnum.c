#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int i)
{
    unsigned char c;

    c = (unsigned int) i;
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

int main(void)
{
    printf("%d\n", isalnum('a'));
    printf("%d\n", ft_isalnum(47));
    return (0);
}