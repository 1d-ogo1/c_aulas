#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n_secreto, resp, tentativas = 0;
    srand(time(NULL));
    n_secreto = (rand() % 1000) + 1;
    printf("Um jogo para adivinhar o numero secreto entre 1 e 1000.\n"
           "Nas menores tentativas possiveis!!\n");

    do {
        printf("Escolhe um numero :: ");
        scanf("%d", &resp);
        tentativas++;
        if (resp < n_secreto) printf("Demasiado baixo!!\n");
        else if(resp > n_secreto) printf("Demasiado alto!!\n");
    }while(resp != n_secreto);

    printf("Acertou em %d tentativas!!\n", tentativas);
    return 0;

}
