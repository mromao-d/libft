#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isascii(int i)
{
    unsigned char c;

    c = (unsigned int) i;
    if (c >= 0 && c <= 0177)
        return (1);
    else 
        return(0);
}

int main(void)
{
    printf("The real result of function is: %d,\n My result is: %d\n", isascii(900), ft_isascii(900));
    return (0);
}