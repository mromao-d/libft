#include <string.h>
#include <stdio.h>

const char    *ft_strrchr(const char *s, int c)
{
    int len;

    len = 0;
    while (s[len])
        len++;
    while (s[len] != c)
        len--;
    return (&s[len]);
}

int main(void)
{
    printf("%s\n", strrchr("asdzasdsszzggrd", 'z'));
    printf("%s\n", ft_strrchr("asdzasdsszzggrd", 'z'));
    return (0);
}