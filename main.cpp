double my_pow(double a, unsigned int b)
{
    double res = a;
    if (b == 0)
        return 1;
    for (int i = 0; i < b - 1; i++)
    {
        res = res * a;
    }
}