#include <stdio.h>

int main(){

    char c;
    printf("escreva uma letra");
    scanf("%c", &c);
    if(c>='A' && c<='Z'){
        printf("A letra %c é Maiuscula\n", c);
    } else {
        printf("A letra %c é Minuscula\n", c);
    }
    
    char tex[10] = "texto";
    int tam;
    for(tam=0; tam<'\0'; tam++){
        printf("o tamanho é %d", tam)
    }
    return 0;
}
    char c[] = "Programa MaiuscUlO";
    int tam;
    while(c[tam]!='\0'){
        tam++;
    }
        printf("o tamanho é %d\n", tam);

    for(int i = 0; i<tam; i++){
        if(c[i]>='a' && c[i]<='z'){
        printf("%c", c[i]-32);
        } else 
        printf("%c", c[i]);
    }
    char c[80];
    int idade;

    printf("escreva seu nome:");
    fgets(c, 80, stdin);
    printf("escreva seu idade:");
    scanf("%d", &idade);

    printf("Olá %s você tem %d anos", c, idade);


    char tex[80], inv[80];
    int i, j, fim;

    printf("escreva:");
    fgets(tex, 80, stdin);
   
   while(tex[fim]!='\0' && tex[fim]!='\n'){
    fim++;
   }
    i = fim-1;
   while(j<fim){
    inv[j] = tex[i];
    i--;
    j++;
   }
    inv[fim]='\0';
    printf("O inverso é %s", inv);

/*UMA STRING É char='' sempre terminar em '\0'= ultima posição,
para declarar é char texto[tamanho], 'e','x','\0'
ou char texto[] = "exemplo"
Para imprimir ela toda é %s, tex _ já uma letra é %c, tex[0] para scanf n precisa usar &
Usar fgets(nome, tamanho, stdin) para imprimir os espaços ou usar limitações como 
scanf(%[^\n(pode usar limitações de letras tambem)], tex) não é recomendado ou 
usar[%abc(oque é para imprimir),tex] 