#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor, num;
    struct no* prox;
} No;

void insere_final(No** p, int v);
void insere_com(No** p, int v);
void remov_final(No** p);
void remov_com(No** p);
void remov_valor(No** p, int v);
void imprime(No* q);
void libera (No** p);
short busca(No *q, int v);
int contar(No *q);
int contar_iguais(No *q, int v);
int posicao(No *q, int v);
void insere_ord(No** p, int v);
//usar scanf("%d", &L->num) imprimir (L, L->num);

/*return, cria a variavel a que deseja retornar na função int ex=função(parametros) ex=fun(L, 6);
if(função(parametros)==n°do return) printf("Sim"); else printf("Não"); if(fun(L,6)==0) printf("sim");*/


int main(){
   No *L = NULL;
   
   printf("LISTA\n");
    for(int i=0; i<=5;i++){
    insere_final(&L, i);}
    
    imprime(L);
    printf("---------\n");
    int retorno = busca(L, 5);
    printf("%s", retorno ? "Verdadeiro" : "Falso");
    imprime(L);
    libera(&L);
}


void remov_valor(No** p, int v){ 
    No* q = *p;
    if(q==NULL) return;
    if(q->valor==v){
        *p = q->prox;
        free(q);
        return;
    }
    while(q->prox!=NULL){ 
    if(q->prox->valor==v) break;
    q =q->prox;
    }
    if(q->prox==NULL) return;
    No* aux = q->prox;
    q->prox = aux->prox;
    free(aux);
}
void remov_final(No** p){ 
    No* q = *p;
    if(q==NULL) return;
    if(q->prox==NULL){
        *p = NULL;
        free(q);
        return;
    }
    while(q->prox->prox!=NULL) q =q->prox;
    free(q->prox);
    q->prox = NULL;
}

void remov_com(No** p){ 
    No* q = *p;
    if(q==NULL) return;
    *p = q->prox;
    free(q);
    return;
}

void insere_com(No** p, int v){
    No* q;
    q = (No*)malloc(sizeof(No));
    q->valor = v;
    q->prox = *p;
    *p=q;
}
void insere_ord(No** p, int v){
    No* q = (No*)malloc(sizeof(No));
    q->valor = v;
    q->prox=NULL;
    if(*p==NULL) *p = q;
    else{
        No *aux = *p;
        if(aux->valor > v){
            *p=q;
            q->prox=aux;
            return;
        } 
        while(aux->prox!=NULL){
            if(aux->prox->valor > v) break;
            aux = aux->prox;
        }
            q->prox = aux->prox;
            aux->prox = q;
}}

void insere_final(No** p, int v){
    No *aux, *q;
    q = (No*)malloc(sizeof(No));
    q->valor = v;
    q->prox = NULL;
    if(*p==NULL) *p=q;
    else{
    aux = *p;
    while(aux->prox!=NULL) aux= aux->prox;
    aux->prox= q;
    }     
}
short busca(No *q, int v){//n funciona
    while(q!=NULL){
        if(q->valor==v) return 1;
        q = q->prox;
    }
    return 0;   
} 
void imprime (No* q){
    while(q!=NULL){
    printf("%d\n", q->valor);
    q = q->prox;
    }    
} 
int contar(No *q){ 
    int soma = 0;
    while(q!=NULL){
        soma++;
        q = q->prox;
    }
    return soma;
   
}
int contar_iguais(No *q, int v){ 
    int soma = 0;
    while(q!=NULL){
        if(q->valor==v) soma++;
        q = q->prox;
    }
    return soma;
}
int posicao(No *q, int v){ 
    int soma = 1;
    while(q!=NULL){
        if(q->valor==v) return soma;
        q = q->prox;
        soma++;
    }
    return -1;
}
void libera (No** p){
    No* q;
    while(*p!=NULL){
    q = *p;
    *p = (*p)->prox;
    free(q);
    }    
} 
/*no inicio; o Q recebe o enderenço de L e enquanto Q for !=NULL ele recebe o endereço do prox e 
depois imprime, só encerra quando q for == NULL

/*no final; o Q recebe o enderenço de L e imprime, e enquanto Q for !=NULL ele recebe o endereço do 
prox, só encerra quando q for == NULL*/

/*remove no final, roda o laço até chegar no NULL quando for NULL ele volta um espaço e da a ele o 
valor de NULL*/

/*remove no começo, verifica se a lista é vazia se for retorna, se não o ponteiro p de L vai para prox
e depois libera o q que esta apontando para o primeiro valor da lista de L*/

/*remove valor, verifica se a lista é vazia se for retorna, se não o ponteiro l lê o scanf e atribui a
num e num=v, se q->valor(o primeiro valor) = num, o *p recebe o valor de q->prox, e libera q, enquanto
q->prox!=NULL o laço continua e verifica se q->prox->valor=num; se verdadeiro q=q->prox, depois verifica
se q->prox==NULL se for retorna se não, cria um ponteiro auxiliar e atribui aux=q->prox; 
q->prox=aux->prox e depois libera o ponteiro auxiliar free(aux)*/

/*libera, o p recebe L e cria um ponteiro auxiliar q, enquanto *p!=NULL o laço continua e q=p p=p->prox
e depois libera free(q),quando p=NULL o laço termina*/

/*busca, parametros é o *q e int v, int v=num no scanf, verifica se q!=NULL se sim verifica se o num tem
no primeiro ponteiro se não continua e vai para o outro ponteiro q->prox até chegar ao NULL, se encon-
trou o valor retorna a TRUE se não a FALSE, e como é int tem que ter o return*/

/*contar, recebe *q e enquanto q!=NULL o laço roda e adiciona +1 em soma, quando q==NULL o laço acaba e 
retorna a variavel de soma; contar_iguais recebe *q, int num=v enquanto q->valor==v soma+1*/

/*posição, recebe *q e int v=num, enquanto q->valor!=NULL o laço roda e acrescenta +1soma; quando 
q->valor==v retorna o valor de soma, se não encontrar retorna uma mensagem*/
