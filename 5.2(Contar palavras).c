#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main()
{
    int n = 0, anterior = 0;
    char letra;
    while((letra = getchar()) != EOF)
    {
        if (isalpha(letra) || ispunct(letra))
        {
            anterior = 1;
        }
        else if(anterior == 1)
        {
            anterior = 0;
            n++;
        }
    }
    
    printf("%d\n", n);
    EXIT_SUCCESS;
}
