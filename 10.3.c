#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


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

double rec_area(Rect a){
    double largura = a.sup_dir.x-a.inf_esq.x, altura = a.sup_dir.y-a.inf_esq.y;
    assert(altura <= 0 || largura <= 0);
    return largura*altura;
}

int ponto_dentro(Rect a, Ponto r){
    if(r.x > a.inf_esq.x && r.y > a.inf_esq.y && r.x < a.sup_dir.x && r.y < a.sup_dir.y) return 1;
    return 0;
}

int rect_dentro(Rect r1, Rect r2){
    if(ponto_dentro(r1, r2.inf_esq) == 1 && ponto_dentro(r1, r2.sup_dir) == 1) return 1;
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
