#include <stdio.h>
#include <string.h>
#define max 3

typedef struct aluno{
    char nome[100];
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
    typedef struct aluno t_aluno;
    t_aluno aux;
    printf("escreva seu nome: ");
    fgets(aux.nome, 100, stdin);
    printf("escreva sua nota: ");
    scanf("%f", &aux.nota);
    getchar(); //serve para guardar o espaço \n e pular direto para scanf

    return aux;
}

void imprimealuno(t_aluno a){
    printf("Dados --");
    printf("Aluno %s. Nota %.2f\n", a.nome, a.nota);
}

void listar(t_aluno turma[], int n){
    printf("Imprimindo\n");
    int i;
    for(i=0;i<n;i++)
    imprimealuno(turma[i]);
}
/* typedef serve para trocar de nome ex: typedef struct produto = t_produto 
(para usar:typedef struct produto{}nome que quer colocar) acessando no main = nome nomedanovavariavel;
ex: t_produto p ,para imprimir usar ("%d",novavariavel.variavel) ex; ("%d",p.idade) */
