#include <stdio.h>
#include <string.h>
#define max 3

typedef union {
    char c;
    int n;
} teste ;

int main(){
    teste m;
    m.c = 'k';
    m.n = 100;
    printf("o valor é %c", m.c);
    return 0;}

typedef union { //Não é para dar certo
    float f;
    int n;
} teste ;
int main(){
    teste m;
    m.f = 10.0;
    m.n = 10;
    printf("o valor é %2.3d e %2.3f", m.n, m.f);
    return 0;
}
/*union guarda dados igual o struct (ocupa -espaço) mas n dá certo 99% das vezes a 2°variavel
ocupa tambem a 1° variavel*/

typedef enum { dom=1, seg, ter, qua, qui, sex, sab} teste ;
int main(){
    int d;
    printf("Dia ");
    scanf("%d", &d);
    if(d>=seg && d<=sex) printf("trabalho\n");
    else if(d==sab)printf("limpar\n");
    else printf("descanço\n");
    return 0;
}
/* enum enumera, como fosse um vetor. enum{on(0), two(1), tre(2), for(3)} se n quiser
começar do 0 usar {on=1, two, tre}
*/