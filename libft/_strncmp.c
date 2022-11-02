#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t len)
{
    unsigned    int i;
    unsigned    char one;
    unsigned    char two;

    i = 0;
    while ((s1[i] != '\0') && (s1[i] == s2[i]) && (i < len))
        i++;
    one = s1[i];
    two = s2[i];
    return (one - two);
}

int main(void)
{
    char *one = "abcdefgh\t";
    char *two = "abcdefgh\n";

    printf("the real result is: %d\n my result is: %d", strncmp(one, two, 3), ft_strncmp(one, two, 3));
    return (0);
}