#include <stdio.h>
#define tam 1320
int main(){
    printf("Escreva o valor da sequencia:");
    int vet[tam];
    int n;
    scanf ("%d", &n);
    int i;
    
    if(n>=tam){
        printf("o valor será alterado para %d", tam);
        n = tam;
    }
    int soma;
    for(i=0;i<n;i++){
    vet[i]= i+1;
    }
    
    for(i=0;i<n;i++){
    soma += vet[i];
    }
    if (n>=5){
    printf (" Soma de 1,2,3,4... + %d = %d\n", n, soma);
    } else if (n>=3){
            printf (" Soma de 1,2,... + %d = %d\n", n, soma);
    } else if (n<=1){
            printf (" Soma de 0 + %d = %d\n", n, soma);
    } else 
            printf (" Soma de 1,... + %d = %d\n", n, soma);    

    
  
    return 0;
}
//declara vetor[seu tamanho]={oq tem nele} ex[3]={0,1,2}


