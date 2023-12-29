#include <stdio.h>
#include <stdlib.h>

int main(){
    short int i = 1;
    
    printf ("%d conteudo,  %ld bytes\n",i,sizeof(short int));

    printf ("%d conteudo,  %p bytes\n",i,&i);
// N funciona &i com %d ou %x nem %hn,só %p, e pede para usar %ld para short

    return 0;
/*short tipo nome _ vai mostrar quantos bytes ocupa, para imprimir usar %ld sizeof(nome)
para encontrar onde esta alocado na memória usar "%p", %nome _ HEXADECIMAIS vai do 0 até o f*/
}
int main(){
    char vet[10];
    int i;
  
    for(int i=0; i<10;i++)

    printf (" %p \n",&vet[i]);

    return 0;
}
int main()
    char i , *p;
    p = &i;
    i = 'a';
    printf ("i = %c &i = %p \n",i, &i);
    printf ("*p = %c p = %p &p = %p \n",*p ,p, &p);
    *p = 'Z';
    printf ("i = %c &i = %p \n",i, &i);
    printf ("*p = %c p = %p &p = %p \n",*p ,p, &p);

int main(){
    int a, b , *ap, *bp;
    ap = &a;
    a = 1;
    bp = &b;
    (*ap)++;
    b = a + *ap;
    *bp = *ap * *bp;
    
    printf ("a= %d b = %d ap = %d bp =%d\n",a,b, *ap, *bp);
}
/*um ponteiro é *p ele aponta o conteudo de uma variavel e seu endereço, podendo mudar o conteudo,
para usar: tipo nome, *p; p=&nome printf("%p", *p) */
 

int main(){
    typedef struct {
    int dia, mês, ano;
    } data;

data hoje;
data *p = &hoje;
p->dia = 13; //ou (*p).dia = 13;
p->mês = 03;
p->ano = 2008;
printf("%d, %d de %d",hoje.dia, hoje.mês, hoje.ano);
}

int main(){
    typedef struct {
    int *p1, *p2;
    } dat;

dat data;
int i1 =1, i2 =7;
data.p1 = &i1;
data.p2 = &i2;

printf("i1 =%d, i2=%d de p1=%d p2=%d\n", i1, i2, *data.p1, *data.p2);
}
/*para o ponteiro em uma struct, usar para mudar o conteudo *p->nomedavariavel = ex, *p->oi=olá; 
para imprimir usar ("%d", nomedastruct.variavel), ("%d", teeste.oi);

para apontar para um ponteiro usar nomedastruct.ponteiro = &nome, oi.pont1 = &teste; 
imprimindo ("%d",nomedastruct.ponteiro), ("%d",oi.pont);*/
falar com o JOÃO