#include <stdio.h>

int main(){
    printf("Escreva o valor do raio:");
    int n;
    scanf ("%d", &n);
    
    
    for (int i =0; i<=n; i++){
    int res = n*i ;   

    printf("%d x %d = %d\n", n, i, res);
   
    }
    
    int i = 0
    
    while (i<=50){
    int res = n*i ;   

    printf("%d x %d = %d\n", n, i, res);
    i++;
    }

        
    int soma = 1;
    for (i =0; i<=n; i++){
    printf("2^%d=%d\n", i, soma);
    soma = soma*2;
    return 0;
}
  for (i=1; i<=n; i++){
    fat = fat*i;
    }
    printf("%d^%d=%d\n", n, i, fat);

  
 char text[80];
    char pav[80];
    int i, j, tamt, tamp;
    printf("texto=\n");
    fgets(text,80,stdin);
    printf("palavra=\n");
    fgets(pav,80,stdin);

    tamt = strlen(text)-1;
    tamp = strlen(pav)-1;
    printf("A palavra esta nas posições\n");
    for(i=0;i<=tamt-tamp;i++){
        j=0;
        while(j<tamp){
        if(pav[j]!=text[i+j]) break;
        j++;
        }
        
        if(j==tamp) printf("%d\n", i);

