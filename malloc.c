#include <stdio.h>
#include <stdlib.h>
///*Malloc=alocação dinâmica; 

typedef struct {
    int dia, mes, ano;
} data;

int main(){
    data *dat= (data*) malloc(10*sizeof(data));
        if (dat!=NULL){
        scanf("%d", &dat->dia);
        scanf("%d", &dat->mes);
        scanf("%d", &dat->ano);
        printf("%d/%d/%d", 
        dat->dia, dat->mes, dat->ano);
        } else printf("ERRO"); //isso n funciona
        
    free(dat);

    return 0;
} 
/*Para usar malloc usar a biblioteca <stdlib.h> usando: tipo *ponteiro = (tipo*) malloc(bytes);
ou ponteiro = (tipo*) malloc(tamanho que quer*sizeof(tipo)); int *p = (int*) malloc(10*sizeof(int))
sempre verificar se malloc é valido usando if(ponteiro == NULL) exit; e sempre usar free no final
para liberar a memória ex: free(ponteiro);*/

int main(){
int *n = (int*) malloc(100*sizeof(int));
    for(int i=0;i<100;i++){
    printf("%d\n", n[i]);
    }
free(n);

return 0;}
int main(){
int **n = (int**) malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
    n[i] = (int*) malloc(3*sizeof(int));
    }
    free(n[i]);
    free(n);
return 0;
}
/*para um malloc na matriz criar um ponteiro para outro **p e 2 for um para linha e outra para coluna,
para acessar a matriz usar o ponteiro[linha][coluna]=n°; p[1][3] = 7; como o ex acima, lembrando que
tem que liberar primeiro as colunas = free(ponteiro[i]) depois a linha = free(ponteiro)*/