#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUM 100

int main(){
    unsigned data[MAX_NUM], n = 0;
    float contagem = 0;
    srand(time(NULL));
    printf(":");
    scanf("%d",&n);
    for(unsigned k = 0; k < n; k++){
        data[k] = (rand()%(365)) + 1;
        printf("%d\n", data[k]);
    }
    for(unsigned k = 0; k < n; k++){
        for(unsigned i = k+1; i < n; i++){
            if(data[k] == data[i]) contagem++;
        }
    }
    contagem = contagem/n;
    printf("%f\n", contagem);
    return 0;
}
