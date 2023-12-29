#include <stdio.h>
#include <math.h>

int main(){
    printf("Escreva um valor:");
    double n;
    scanf("%lf", &n);

    printf("A raiz do númeo %lf é %lf", n, (sqrt(n)));
    
    
    return 0;
}
// para usar a biblioteca de matématica usar #include <math.h>
// e para executar usar gcc arquivo.c -lm

typedef struct no {
    int valor, primeiro;
    struct no* prox;
} No;

void insere_final(No** p, int v);
void insere_com(No** p, int v);
void remov_final(No** p);
void remov_com(No** p);
void remov_valor(No** p, int v);
void imprime(No* q);

int main(){
   No *L = NULL;
   printf("LISTA\n");
    insere_com(&L, 3);
    insere_com(&L, 5);
    insere_com(&L, 6);

    imprime(L);
    printf("---------\n");
    printf("digite o valor para remover ");
    scanf("%d", &L->valor);
    remov_valor(&L, L->valor); 
    imprime(L);
    
}

void remov_valor(No** p, int v){ 
    No* q = *p;
    v = q->valor;
    if(q==NULL) return;
    if(q->primeiro==v){
        *p = q->prox;
        free(q);
        return;}
    
    while(q->prox!=NULL){ 
    if(q->prox->primeiro==v) break;
    q =q->prox;
    }
    if(q->prox==NULL) return;
    No* aux = q->prox;
    q->prox = aux->prox;
    free(aux); //NâO DESISTA
