#include <stdio.h>
#include <string.h>


void f1(int a);

int main(){
    f1(1);

    return 0;
}

void f1(int a){
    printf("%d\t", a);
    if(a<20) f1(a+1);
    else return;
}

int f1(int a);
int f2(int b);

int main(){
    int c = 5;
    printf(" %d\t", f1(c));
    return 0;
}

int f1(int a){
    if (a<=10) a = f2(a+1);
    return a;
}

int f2(int b){
    b = f1(b+1);
    return b;
}

/*usar prototipo para chamar funções em outra função, 1°linha tipo nome(parametro); = int ex(int a);
 depois int main() depois função*/


void fun1();
void fun2(int x);

int x=1;

int main(){
        x=2;
        fun1();
        fun2(x);
        printf("main: %d\n", x);
}

void fun1(){
        x = x+1;
        printf("fun1: %d\n", x);
}
void fun2(int x){
        x = x+1;
        printf("fun2: %d\n", x);
}
// a variavel fora do main pode ser acessada em qualquer local (função) variavel global