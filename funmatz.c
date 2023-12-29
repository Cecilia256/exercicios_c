#include <stdio.h>
void le (int vet[], int n){
    int i;
        for(i=0; i<n; i++){
            printf("digite");
            scanf("%d", &vet[i]);
        }
}   
void es (int vet[], int n){
    int i;
        for(i=0; i<n; i++){
            printf("vet[%d]=%d\n", i, vet[i]);
        }
}
            
int main(){
    int vet1[10], vet2[20];
    printf("lendo vet1\n");
    le(vet1,10);
     printf("lendo vet2\n");
    le(vet2,20);
    printf("escrevendo vet1\n");
    es(vet1,10);
     printf("escrevendo vet2\n");
    es(vet2,20);
    
    return 0;

    void fun1 (int matriz[][3][3], int n, int m, int o){
    int i, j, k, cont=0;
    for(k=0; k<o; k++)
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
        matriz[i][j][k] = cont++;
}
int main(){
    int matriz[3][3][3];
    int i, j, k;
    fun1(matriz, 3,3,3);
    for(k=0; k<3; k++){
        for(i=0; i<3; i++){
            for(j=0; j<3; j++)
            printf("%d", matriz[i][j][k]);
            printf("\n");
         }
            printf("\n##\n");}
}


