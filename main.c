#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int i;
    Aluno* a;
    Disciplina* d;
    char nome[40], curso[40], nomedisciplina[40];
    for(i=0;i<5; i++) {
        nome[i] = 'n';
        curso[i] = 'c';
        nomedisciplina[i] = 'd';
    }
    nome[6] = '\0';
    curso[6] = '\0';
    nomedisciplina[6] = '\0';
    a = criaAluno();
    d = criaDisciplina();
    d = insereDisciplina(d, 1, nomedisciplina);
    a = insereAluno(a,1,nome, curso,d);
    imprimeAluno(a);
    return 0;
}
