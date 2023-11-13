#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "abb.h"

void abb_imprime(Arv* a){
    if (a != NULL) {
        abb_imprime(a->esq);
        printf("%s\n",a->curso->nome);
        abb_imprime(a->dir);
    }
}


Arv* abb_insere (Arv* a, int v){
    if (a==NULL) {
        a = (Arv*)malloc(sizeof(Arv));
        a->curso = (Curso*)malloc(sizeof(Curso));
        printf("Qual o nome do curso?");
        scanf(" %30[^\n]", a->curso->nome);
        a->cod = v;
        a->esq = a->dir = NULL;
        a->curso->alunos = (Lista*)malloc(sizeof(Lista));
        a->curso->alunos = NULL;
        printf("Arvore locada com sucesos");
    }
    else if (v < a->cod){
        a->esq = abb_insere(a->esq,v);
    }else{
        a->dir = abb_insere(a->dir, v);
    }
    return a;
}