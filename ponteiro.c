#include <stdio.h>
#include <stdlib.h>

int *max(int *a, int *b) {
    if(*a>*b)
    return a;
    else 
    return b;
} 

int main(){
    int i1=60, i2=98;
    int *p = max(&i1, &i2);
    *p = 10;
    printf("i1=%d i2=%d max=%d", i1, i2, *p);
    return 0;
}
/*para usar uma função com um ponteiro, declarar um ponteiro para a função e como parametro usar o
 endereço &, ex: tipo *p =função(&a, &b)*/

int soma(int *v, int n) {
    int so=0, i=0;
    for(i=0;i<n;i++)so+=v[i];
        return so;
}
int main(){
    int v[100];
    int n =100;
    
    printf("i1=%d i2=%d", n, soma(&v[0],n));
    return 0;
}

int main(){
    int v[]= {1,2,6,8,4};
    int *p;
    p=&v[0]; // ou p=v
    
    printf("%d", *p);
    return 0;
}
/*o ponteiro de um vetor para apontar para o primeiro n° do vetor é só usar o nome do vetor
 ex: int *p; p=&v[0] ou p=v; para outro n° usar *p=v[n°] ex *p=v[8] */
int main(){
    int i, *p;
    i =100;
    p = &i;
    int **q;
    q = &p;
    printf("i=%d p=%d q=%d", i, *p, **q);
    return 0;}
 /*Para apontar um ponteiro para outro ponteiro usar **nome = &ponteiro; **p2 = &p1;*/