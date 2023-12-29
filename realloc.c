#include <stdio.h>
#include <stdlib.h>

/*int main(){ 
    int *p= (int*) malloc(10*sizeof(p));
    p = realloc(p, 20*sizeof(int));
    free(p);

    return 0;
} 
/*realloc vai mudar o tamanho do malloc, malloc= tipo *ponteiro = (tipo*) malloc(tamanho*sizeof(tipo)); 
realloc= ponteiro = realloc(ponteiro, novotamanho*sizeof(tipo));*/

int main(){ 
    int *p= (int*) malloc(2*sizeof(p));
    p[0]=1;
    p[1]=2;
    int *q = realloc(p, 3*sizeof(int));
    q[2]=3;

    for(int i=0;i<3;i++)
    printf("%d", p[i]);
    free(q);
    return 0;
}