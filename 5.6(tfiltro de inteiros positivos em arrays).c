#include <stdio.h>

void ordenar(int vec_1[], int size_1)  /* Função de ordenação de um array de inteiros positivos e zeros, ficando ordenados na mesma
ordem que aparecem no array*/
{
    for(int i = 1; i < size_1; i++)
    {
        if(vec_1[i] > 0)
        {
            for(int k = i; k > 0; k--)
            {
                if(vec_1[k-1] == 0)
                {
                    vec_1[k-1] = vec_1[k];
                    vec_1[k] = 0;
                }
            }
        }
    }
}


int positivos(int vec[], int size)  /*Função para filtrar positivos num array */
{
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        if(vec[i] < 0)
        {
            vec[i] = 0;
            n++;
        }
    }
    ordenar(vec, size);
    return n;
}
