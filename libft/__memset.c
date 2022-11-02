#include <string.h>
#include <stdio.h>

/* Writes len bytes of value c (converted to an unsigned char) to the string b */

/*  Set a whole block of memory to a particular value  */

/* https://www.youtube.com/watch?v=Njsn5HAnAnk */


/* Convert void pointer into char https://www.youtube.com/watch?v=eIL3oMmn1OM  */

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return (b);
}

int main(void)
{
    char    str[20];
    int  i;
    
    i = 0;
    ft_memset(str, 'H', 10);
    ft_memset(str + 9, 'A', 9);
    ft_memset(str + 18, 'Z', 1);
    /*  One way to print it  */
    while (str[i])
    {
        printf("%c", str[i]);
        i++;
    }
    /*  Other way to print it  */

        printf("\n%s", str);

    // Something Wrong with the output. It is only returning 9 "H"...

}


/*   Main to Understand how Memset works   */
/* int main    (void){
    char    str[10];
    int     i;

    i = 0;
    memset(str, 'A', sizeof(char) * 10);
    while (i != '\n'){
        printf("%c", *str);
        i++;
    }
    return (0);
} */