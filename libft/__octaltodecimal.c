int OctalToDecimal(int n)
{
    int p;
    int decimal;
    int r;

    p = 0;
    decimal = 0;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        decimal = decimal + r * pow(8, p);
        ++p;
    }
    return (decimal);
}