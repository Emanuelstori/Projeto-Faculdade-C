#include<stdio.h>
#include<string.h>
#include"biblioteca.h"
#include <stdlib.h>


//implementação das funções

void ping()
{
    printf("Pong");
}

Aluno *criaAluno()
{
    Aluno *novo;

    novo = malloc(sizeof(Aluno));
    novo->prox = NULL;

    return novo;
}

Aluno *insereAluno(Aluno *cabeca, int matricula,char *nome, char *curso,Disciplina *disciplinas)
{
    Aluno *novo;
    novo = criaAluno();
    novo->matricula = matricula;
    strcpy(novo->nome, nome);
    strcpy(novo->curso, curso);
    novo->lista_disciplinas = disciplinas;
    novo->prox = cabeca;
    return novo;
}

void imprimeAluno(Aluno *cabeca)
{
    if(cabeca == NULL)
        return;
    else
    {
        printf("%d\n", cabeca->matricula);
        puts(cabeca->nome);
        puts(cabeca->curso);
        printf("$d\n", cabeca->lista_disciplinas->nome);//cabeca->lista_disciplinas
        puts(cabeca->lista_disciplinas->nome);
    }
    imprimeAluno(cabeca->prox);
};

Aluno *buscaAluno(Aluno *cabeca, int x)
{
    if(cabeca == NULL)
        return cabeca;
    if(cabeca->matricula == x)
        return cabeca;
    else
        return buscaAluno(cabeca->prox, x);
}

Disciplina *criaDisciplina()
{
    Disciplina *novo;

    novo = malloc(sizeof(Disciplina));
    novo->prox = NULL;

    return novo;
}

Disciplina *insereDisciplina(Disciplina *cabeca,int x, char *nome)
{
    Disciplina *nova;
    nova = criaDisciplina();
    nova->codigo = x;
    strcpy(nova->nome, nome);
    nova->prox = cabeca;
    return nova;
}
