#include <stdio.h>
#include <math.h>

int main(){
    printf("Escreva o valor:");
    int n;
    scanf ("%d", &n);

    int i;
    int soma = 0;
    for (i =1; i<=n; ++i){
    soma = pow (n, i);
    printf("%d^%d=%d\n", n, i, soma);
    }

  
    return 0;
}

    

#define max 3

typedef struct aluno{
    char nome[50];
    float nota;
} t_aluno ;

t_aluno lealuno();
void imprimealuno(t_aluno a);
void listar(t_aluno turma[], int n);

int main(){
    int i;
    t_aluno turma[max];
    for(i=0;i<max;i++) turma[i] = lealuno();
    listar(turma, max);

    return 0;
}
t_aluno lealuno(){
    t_aluno aux;
    printf("escreva seu nome: ");
    fgets(aux.nome, 50, stdin);
    printf("escreva sua nota: ");
    scanf("%f", &aux.nota);
    return aux;
}

void imprimealuno(t_aluno a){
    printf("Aluno %s Nota %2f\n", a.nome, a.nota);
}

void listar(t_aluno turma[], int n){
    printf("Imprimindo\n");
    int i;
    for(i=0;i<n;i++)
    imprimealuno(turma[i]);
}