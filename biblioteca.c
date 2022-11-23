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
    novo->matricula = -1;
    novo->lista_disciplinas = NULL;
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
            if(cabeca->matricula != -1)
                {
                    printf("%d\n", cabeca->matricula);
                    puts(cabeca->nome);
                    puts(cabeca->curso);
                    imprimeDisciplina(cabeca->lista_disciplinas);
                }
            else
                return;
        }
    imprimeAluno(cabeca->prox);
};

void imprimeDisciplina(Disciplina *cabeca)
{
    if(cabeca == NULL)
        return;
    else
        {
            if(cabeca->codigo != -1)
                {
                    printf("a\n");
                    printf("%d\n", cabeca->codigo);
                    puts(cabeca->nome);
                }
            else
                return;
        }
    imprimeDisciplina(cabeca->prox);
}

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
    novo->codigo = -1;
    novo->prox = NULL;

    return novo;
}

void leDisciplina(Disciplina *x)
{
    char c;
    int i;
    i=0;
    printf("digite o codigo da disciplina: ");
    scanf("%d",&(x->codigo));
    printf("digite o nome da disciplina: ");
    getchar();
    while((c=getchar())!='\n')
        {
            x->nome[i]=c;
            i++;
        }
    x->nome[i]='\0';
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
