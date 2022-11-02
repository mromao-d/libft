#include <string.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    unsigned long i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main (void)
{
    /* The original function consideres the output a unsigned long (lu) and mine doesn't (d). Validate */
    printf("%lu\n", strlen("asdsad"));
    printf("%d\n", ft_strlen("asdsad"));
    return (0);
}