#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PERGUNTAS 10

int main()
{
    int valor_1, valor_2, input, certas = 0;

    for (int i = 0; i < PERGUNTAS; i++)
    {
        //Atribuição dos valores a serem multiplicados
        srand(time(NULL));
        valor_1 = (rand() % 8) + 1;
        srand(time(NULL)*2);
        valor_2 = (rand() % 8) + 1;
        printf("Quanto é %dx%d?: ", valor_1, valor_2);
        scanf("%d", &input);
        if (input == valor_1 * valor_2) {    // Analise da resposta certa com o input!
            printf("Certo!\n");
            certas ++;
        }
        else printf("Errado! O resultado é %d\n", (valor_1 * valor_2));
    }
    printf("Acertou %d de %d\n", certas, PERGUNTAS);
    return 0;
}
