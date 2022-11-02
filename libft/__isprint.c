#include <stdio.h>
#include <ctype.h>

int DecimalToOctal(long decimalnum)
{
long quotient,octalnum=0;
    int octalNumber[100], i = 1, j;
 
/*     printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum); */
    quotient = decimalnum;
 
    //Storing remainders until number is equal to zero
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
 
    //Converting stored remainder values in corresponding octal number
    for (j = i - 1; j > 0; j--)
        octalnum = octalnum*10 + octalNumber[j];
    return (0);
}

int ft_isprint(int i)
{
    unsigned char c;

    c = (unsigned char) i;
    if (DecimalToOctal(i) >= 40 && DecimalToOctal(i) <= 47)
        return (1);
    return (0);
}

int main(void)
{
    int i;

    i = 0;
/*     while (i++ <= 127)
        printf("%d\n", "%d\n", isprint(i), ft_isprint(i)); */
    while (i++ <= 127)
        printf("%d\t", /* "%d\t", isprint(i), */ ft_isprint(i));
    return (0);
}