#include <stdio.h>
#include <string.h>
int main(){
    char text[80];
    int cont=0, i=0;
    printf("Contando palavras\n");
    fgets(text,80,stdin);

    while(text[i]!='\n'&& text[i]!='\0'){
        while(text[i]==' ') i++;
        if(text[i]!='\n'&& text[i]!='\0'){
        cont++;
        while(text[i]!='\n'&& text[i]!='\0'&&text[i]!=' ') i++;
        
        }
        
    } 
    printf("Essa frase tem %d palavras", cont);

    return 0;
}