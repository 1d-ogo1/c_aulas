int magico(int a[20][20], int n)
{
    int valor_magico1 = 0,valor_magico2 = 0, soma_1= 0,soma_2, m1 = 0, m2 = 0;
    int valor_magico3 = 0, valor_magico4 = 0;
    
    for(int k = 0; k < n; k++){
        
        valor_magico3 += a[k][k];
        valor_magico4 += a[n-k-1][k];
        
        for(int i = 0; i < n; i++)
        {
            soma_1 += a[i][k];
            soma_2 += a[k][i];
        }
        if(m1 == 0){
            valor_magico1 = soma_1;
            m1++;
        }
        else if(valor_magico1 != soma_1) return 0;
        if(m2 == 0){
            valor_magico2 = soma_2;
            m2++;
        }
        else if(valor_magico2 != soma_2) return 0;
        soma_1 = 0;
        soma_2 = 0;
    }
    
    if (valor_magico1 != valor_magico2) return 0;
    if (valor_magico1 != valor_magico3) return 0;
    if (valor_magico3 != valor_magico4) return 0;
    return 1;
}
