#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc!=3){
        printf("Erro");
        return -1;
    }
    int a,b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    
    printf ("Soma: %d\n", a+b);

    return 0;
} 
int main(int argc, char **argv){
    int i;
    for(i=0;i<argc;i++)
    printf ("%s\n", argv[i]);

    return 0;
}
/*argc inteiro, argv vetor de strings*/