#include <stdio.h>

int main(){
    printf("escreva um número (Matriz):");
    int n;
    scanf("%d", &n);
    
    int i, j;
    for (i =1; i<=n; i++){
        for (j=1; j<=n; j++){
            if(i==j){
            printf("+");
                } else 
                printf("*");
     }
        printf("\n");

    printf("escreva um (número!divisivelde100):");
    int n;
    scanf("%d", &n);
    int i;
    for (i =1; i<100; i++){
        if ((i%n)==0 )
       
    printf("%d\n", i);
    
    printf("Tabuada C\n");
    int i, j;
    for (i =1; i<=10; i++){
        for (j=1; j<=10; j++){
        printf("%d x %d = %d\n", i, j, i*j);
     }
       
        printf("\n");
    }
    return 0;
}


