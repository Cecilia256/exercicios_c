#include <stdio.h>
#include <string.h>


int main(){
    char text[80];
    printf("Escreva:");
    fgets(text, 80, stdin);

    int i, aux;
    int tam = strlen(text);
    int j = tam-1;

    while(i<j){
    aux = text[j];
    text[j] = text[i];
    text[i] = aux;
    i++;
    j--;

}
printf("O inverso é %s\n", text);


   char text[80] = "oiio";
    int i;
    int tam = strlen(text);
    int j = tam-1;

    while(text[i]==text[j]){
    i++;
    j--;
    if(i>=j) break;
        }
    
    if(i>=j){
        printf("È um paquimetro\n");
    } else {
        printf("Não é um paquimetro");}
        
return 0;
}
    