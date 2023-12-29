#include <stdio.h>
int main(){
    int i, j;
    int matriz[5][4];
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            matriz[i][j] = i+j;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<5;i++){
            int soma = 0;
            for(j=0;j<4;j++){
            soma += matriz[i][j]; 
            }
            printf("%d\n", soma);
        }
        
    
    return 0;
}
//matriz[linhas][colunas]


