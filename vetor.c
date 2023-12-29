#include <stdio.h>
#define tam 100
int main(){
    printf("Escreva o valor da sequencia:");
    int vet[tam];
    int n;
    scanf ("%d", &n);

    int i;
    for(i=0;i<n;i++){
    scanf("%d", &vet[i]);
    }
    int pos;
    int min = vet[0];
    for(i=1;i<n;i++){
        if (min>vet[i]) {
        min=vet[i];
        pos = i;
    }}
    
        printf("o valor minimo é %d na posição %d", min, pos );   
    return 0;
}
void fun1(int vet[], int tam){
        int i;
        for(i=0;i<tam;i++)
        vet[i]=1;
}

int main(){
      int x[10];
      int i;
      for(i=0;i<10;i++)
      x[i]=0;

        fun1(x,5);
        for(i=0;i<10;i++){
                printf("%d\n",x[i]);
        }
}