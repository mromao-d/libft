#include <string.h>
#include <stdio.h>

const char    *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;

    while (s[i] != c)
        i++;
    return (&s[i]);
}

int main(void)
{
    printf("%s\n", strchr("asdzasdsszzggrd", 'z'));
    printf("%s\n", ft_strchr("asdzasdsszzggrd", 'z'));
    return (0);
}