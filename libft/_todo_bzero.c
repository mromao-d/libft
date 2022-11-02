#include <strings.h>
#include <stdio.h>

/* void    *ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return (s);
    while (i < n)
        i++;
    while (((char *) s[i]) != '\0')
    {
        ((char *) s[i]) = '\0';
        i++;
    }
    (char *)s = (void *) 0;
    return (s);
} */

int main(void)
{
    char str[30] = "aoksjdfkjb";
    char str2[30] = "aoksjdfkjb";
    int i;

    i = 0;
    printf("%s\n", str);
    bzero(str, 10);
 /*    ft_bzero(str2 + 5, 10); */
    while (str[i])
    {
        printf("%c", str[i] = str[i] << 8);
        i++;
    }
    printf("\n");
    printf("%s\n", str);
    printf("%s\n", str2);
    return (0);
}