#include <stdio.h>
#include <string.h>

int soma(int a, int b){
    int soma = a+b;
    return soma;
}
int subt(int a, int b){
    int subt = a-b;
    return subt;
}
int maior(int a, int b){
    if(a>b){
    int maior = a;
    } else {
    int maior = b;
    return maior;
    }
}

int main(){
    int a, b;
    printf("digite dois valores:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Soma: %d\n", soma(a, b));
    printf("Subtração: %d\n", subt(a, b));
    printf("Maior: %d\n", maior(a, b));

}

double celsios (double f) {
    double c = (f-32.0)*1.8;
    return c;
}
double fav (double c){
    double f = 1.8*c+32.0;
    return f;
}
int main(){
    double c;
    printf("digite um valor em celsios\n");
    scanf("%lf", &c);
    double f = fav(c);
    printf("o valor em celsios é %.3lf e em fav %.3f", c, fav(c));
    
  
    return 0;
}
/* uma função tem seu tipo nome(parametro){} = int teste (int x){}
e o return valor = return (x+1*2)
para chamar tem que abrir a variavel e chamar a funçao int t = teste(x)
para uma função que não retorna nada usar void int teste (int x){}
ou para uma função que não sabe os parametros usar nome(void){}
uma função a gente muda o resultado do parametro não o nome da função
 int teste (int ex){
    ex = 2+8
*/


