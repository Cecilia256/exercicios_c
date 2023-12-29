#include <stdio.h>

int n;
int fun1(int n);

int main(){
        printf("digite um número:");
        scanf("%d", &n);
        printf("o número %d em fat é \n", n);
        printf("%d  \n", fun1(n));
}

int fun1(int n){
        int atual, i, prox, ant;
        ant = atual = 1;
        for  (i=3; i<=n; i++){
        prox = ant+atual;
        ant = atual;
        atual = prox;
        }
        return atual;          
}
int n;
int b;
int fun1(int n, int b);

int main(){
        printf("digite um número:");
        scanf("%d", &n);
        printf("digite o expoente:");
        scanf("%d", &b);
        
        printf(" o resultado é %d  \n", fun1(n, b));
}

int fun1(int n, int b){
        if (b==0) {
        return 1;
        } else { 
        n = n*fun1(n, b-1);        
        return n;
}}

/*prestar atenção no erro, fun(parametro)*/