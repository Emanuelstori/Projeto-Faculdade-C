#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int i;
    char menu;
    char nome[40], curso[40], nomedisciplina[40];
    Aluno* a=NULL;
    Disciplina* d=NULL;

    for(i=0; i<=5; i++)
        {
            nome[i] = 'n';
            curso[i] = 'c';
            nomedisciplina[i] = 'd';
        }
    nome[6] = '\0';
    curso[6] = '\0';
    nomedisciplina[6] = '\0';
    d = insereDisciplina(d, 1, nomedisciplina);
    imprimeDisciplina(d);

    while(menu!='k')
        {
            //menu
            printf("---------  menu  ---------\n");
            printf("a) Carregar uma lista de alunos de um arquivo\n");
            printf("b) Criar uma lista de alunos vazia\n");
            printf("c) Inserir aluno\n");
            printf("d) Inserir disciplina na lista de disciplinas de um aluno\n");
            printf("e) Remover disciplina da lista de disciplinas de um aluno\n");
            printf("f) Remover aluno\n");
            printf("g) Buscar aluno\n");
            printf("h) Editar informações de um aluno\n");
            printf("i) Imprimir lista de alunos\n");
            printf("j) Salvar lista de alunos em um arquivo\n");
            printf("k) Encerrar");

            printf("\ndigite a letra relacionado ao que procura: ");
            scanf("%c",&menu);
            getchar();

            if(menu=='b')
                {
                    a = criaAluno();
                    printf("\n\nAcao realizada com sucesso sucesso!\n\n");
                }
            if(menu=='c')
                {
                    if(a!=NULL)
                        {
                            a = insereAluno(a,1,nome, curso,d);
                            printf("\n\nAcao realizada com sucesso sucesso!\n\n");
                        }
                    else
                        {
                            printf("\n\nVoce deve criar o aluno antes de inserir.\n\n");
                        }
                }
            if(menu=='i')
                {
                    if(a!=NULL)
                        {
                            imprimeAluno(a);
                            printf("\n\nAcao realizada com sucesso sucesso!\n\n");
                        }
                    else
                        {
                            printf("\n\nAluno inexistente.\n\n");
                        }
                }

        }
    return 0;
}
