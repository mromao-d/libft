#include <string.h>
#include <stdio.h>

int ft_memcmp(void *s1, void *s2, size_t n)
{
    size_t i;

    i = 0;
    while ( (i < n) && ((unsigned char *) s1) [i] == ((unsigned char *) s2) [i])
        i++;
    if (((unsigned char *) s1) [i] == ((unsigned char *) s2) [i])
        return (0);
    else if (((unsigned char *) s1) [i] < ((unsigned char *) s2) [i])
        return (-1);
    else
        return (1);
}

int main(void)
{
    printf("1 - The real result is: %d and the custom formula value is %d\n", 
        memcmp("\200", "\0", 1), ft_memcmp("\200", "\0", 1));

    printf("2 - The real result is: %d and the custom formula value is %d\n", 
        memcmp("\200", "\0", 5), ft_memcmp("\200", "\0", 5));
    
    printf("3 - The real result is: %d and the custom formula value is %d\n", 
        memcmp("asdasd", "asdash", 1), ft_memcmp("asdasd", "asdash", 1));
    
    printf("4 - The real result is: %d and the custom formula value is %d\n", 
        memcmp("asdasd", "asdash", 10), ft_memcmp("asdasd", "asdash", 10));


    return (0);
}