#include <stdio.h>
#include <stdio.h>

int main()
{
    long decimalnum, quotient,octalnum=0;
    int octalNumber[100], i = 1, j;
 
    printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum);
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
    printf("Equivalent octal value of decimal no %ld is: %ld  ", decimalnum,octalnum);
    return 0;
}