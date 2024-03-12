double serie_taylor(double x, int n)
{
    double res = 0;
    for (int i = 1; i <= n; i++)
    {
        double xs = 1.0;
        for (int k = 1; k <= i; k++) xs *= x;
        if (i%2 == 0) res -= xs/i;
        else res += xs/i;
    }
    return res;
}
