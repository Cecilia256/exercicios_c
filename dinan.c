#include <stdio.h>
#include <stdlib.h>

struct no {
    int valor;
    struct no* prox;
};

 typedef struct no No;

void imprime(No *q);

int main(){
    No raiz;
    No galho;

    galho.valor = 2;
    raiz.prox = &galho;

    printf("Escreva o número");
    scanf("%d", &raiz.valor);

    imprime(&raiz);

    return 0;
}
void imprime(No *q){
    while(q!=NULL){
        printf("%d\n", q->valor);
        q = q->prox;
    }
}
/*pilha= variaveis criadas por uma função depois são removidas, dados estaticos= variavel global,
heap= variaveis alocadas dinamicas *p=malloc (heap= ilimitar stack= n ilimitar)
int main(){
    int n, i;
    printf("Escreva o número do vetor ");
    scanf("%d", &n);
    int *v = (int*)malloc(n*sizeof(int));
    if(n>=90000)printf("ERRO! tente novamente.\n");
    else{
    for(i=0;i<n;i++) v[i]=i+1;
    for(i=0;i<n;i++) printf("%d\n", v[i]);
    }
    free(v);
    return 0;
}
*/