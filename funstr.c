#include <stdio.h>
#include <string.h>

int main(){

  
    char s1[50]= "ola";
    char s2[50] = "pessoal";

    strncat(s1,s2, 2);
    s1[6] = '\0';
    printf("%s\n", s1);

    char tex[80];
    printf("escreva algo\n");
    fgets(tex, 80, stdin);
    printf("\n");
    int i, tam = strlen(tex);

    for(i = 0; i<=tam; i++)
    printf("%c\n", tex[i]);

    char s1[50]= "acc";
    char s2[50] = "acc";

    int r = strcmp(s1,s2);
    if(r<0){
        printf("essa palavra é menor");
    } else if(r>0) {
        printf("ela é maior");
    } else 
    printf("tem tamanho igual");

//usar <stdlib.h>
    char text[]= "1234a";
    int x = atoi(text);
    printf("%d", x);

    return 0;

   
}

/* A bliblioteca string.h tem a função strlen de contar as strings sem o \0 (strlen(tex)) e strcat
(string, string2) que concatena 2 strings e strncat que permite concatenar quantas strings quiser
(string, string2, quantidade) <-strncpy, strcpy(s1, s2) copia o valor de s2 e atribui a s1
para comparar usar int comparar = strcmp(s1,s2) igual=0 maior>0 menor<0
atoi(text) converte ua string em int, int x = atoi(text) abrir #incluide <stdlib.h>