double my_pow(double a, int b)
{
    double res = a;
    if (b == 0)
        return 1;
    for (int i = 0; i < b - 1; i++)
    {
        res = res * a;
    }
    if (b < 0)
    {
        res = 1 / res;
        return res;
    }
    return res;
}