#include <stdio.h>
#define PI 3.144

int main(){
    printf("Escreva o valor do raio:");
    int n;
    scanf ("%d", &n);
    float raio = PI * (n*n);
    printf ("O raio é %f", raio);

    return 0;
}
//input= scanf ("%d(elemento)", &n(nome da variavel));
//para imprimir o conteudo da variavel usar ("textoaki %d=elemento", variavel);
