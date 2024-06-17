#include <stdio.h>
#include <stdlib.h>



typedef struct{
    double x, y;
}Ponto;


double distancia(Ponto a, Ponto b){
    return ((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y));
}

int mesmo_ponto(Ponto a, Ponto b){
    if(distancia(a,b) < 0.000001) return 1;
    return 0;
}


int main(){
    Ponto a[10], *b = a, *c = a;
    double comp_menor;
    for(unsigned k = 0; k < 10; k++){
        printf("(x,y): ");
        scanf("%lf %lf", &a[k].x, &a[k].y);
        for(unsigned i = 0; i < k; i++){
            if(k == 1){
                comp_menor = distancia(a[k], a[i]);
                c++;
            }
            else if(distancia(a[k], a[i]) > comp_menor){
                comp_menor = distancia(a[k], a[i]);
                c = a + k;
                b = a + i;
            }
        }
    }
    printf("(%.3lf,%.3lf),(%.3lf,%.3lf)\n", b->x, b->y, c->x, c->y);
    return 0;
}
