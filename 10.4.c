#include <stdio.h>
#include <math.h>

typedef struct{
    int dia, mes, ano;
}Data;

int comparar(Data d1, Data d2){
    if(d1.ano > d2.ano) return 1;
    else if(d1.ano == d2.ano && d1.mes > d2.mes) return 1;
    else if(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia > d2.dia) return 1;
    else if(d1.ano == d2.ano && d1.mes == d2.mes && d1.dia == d2.dia) return 0;
    return -1;
}

Data data_diff(Data d1, Data d2){
    Data res = {d1.dia-d2.dia,d1.mes-d2.mes,d1.ano-d2.ano};
    res.dia = abs(res.dia);
    res.mes = abs(res.mes);
    res.ano = abs(res.ano);
    return res;
}
