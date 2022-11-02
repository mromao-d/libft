#include <string.h>
#include <xlocale.h>
#include <stdio.h>

char *ft_strnstr(char *haystack, char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (needle[0] == '\0')
        return (haystack);
    while (haystack[i] != '\0')
    {
        j = 0;
        while(haystack[i + j] == needle[j] && haystack[i + j] != '\0' && (i + j) < len)
        {
            if (needle[j + 1] == '\0')
                return (&haystack[i]);
            j++;
        }
        i++;
    }
    return (0);
}


int main(void)
{
    char *one = "abcdefg";
    char *two = "cd";

    printf("the real result is: %s\n my result is: %s\n", strnstr(one, two, 4), ft_strnstr(one, two, 4));
    return (0);
}