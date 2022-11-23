#include <stdio.h>
#include <stdlib.h>

//A definção da struct

struct disciplina{
    int codigo;
    char nome[40];
    struct disciplina *prox;
};
typedef struct disciplina Disciplina;

struct aluno{
    int matricula;
    char nome[40];
    char curso[40];
    struct disciplina *lista_disciplinas;
    struct aluno *prox;
};


typedef struct aluno Aluno;


//protótipos das funções:

void imprimeAluno(Aluno*);
Aluno *buscaAluno(Aluno*, int);
Aluno *insereAluno(Aluno *, int ,char *, char *,Disciplina *);
Aluno *criaAluno();
void *lerDisciplina(Disciplina *);
void imprimeDisciplina(Disciplina*);
Disciplina *criaDisciplina();
Disciplina *insereDisciplina(Disciplina *,int,  char *);
void ping();
