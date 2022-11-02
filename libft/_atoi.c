#include <stdlib.h>
#include <xlocale.h>
#include <stdio.h>

int    ft_atoi(const char  *str)
{
    int i;
    int   result;

    i = 0;
    result = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
/*     while (*str != '\0' && (*str >= '0' && *str <= '9'))
    {
        result = result * 10 + *str - '0';
        i++;
    } */
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + str[i] - 48;
        i++;
    }
    return (result);
    while (*str != '\0' && (*str < '0' || *str > '9'))
        break;
}

int main(void)
{
    char str1[] = "--12.12";
    char str2[] = "5";

    atoi("s");
    printf("%s\n", str1);
    printf("%d\n", atoi(str1) + atoi(str2));
    printf("%d\n", ft_atoi(str1) + ft_atoi(str2));
    /*printf("%d\n", atoi_l(str, "s")); */
    return (0);
}