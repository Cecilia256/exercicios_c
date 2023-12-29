#include <stdio.h>

int main(){
    printf("Escreva um valor:");
    int n;
    scanf("%d", &n);
    
    if (n%2==1){
        printf("O número %d é Impar", n);
    }

    else{
        printf("O número %d é Par", n);
    }
  switch(n){
        case 2:
            printf(" e esse valor é o primeiro n° primo");
            break;
        case 1: 
            printf(" e esse valor não é primo");
            break;
        case 15:
            printf(" e esse valor é sua idade");
            break
        default:
            printf("ERRO");
        }

    return 0;
}
/*Para simplificar if e else usar (pergunta)?retorno:outro retorno
(5>3)?sim:nao 
