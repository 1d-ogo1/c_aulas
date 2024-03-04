int soma_divisores(int n)
{
    int soma = 0;
    for (int i = 1; i <= n-1; ++i)
    {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma;
}
