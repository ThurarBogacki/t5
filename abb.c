#include <stdio.h>
#include <stdlib.h>
#include "abb.h"

Arv* abb_insere (Arv* a, int v){
    if (a==NULL) {
        a = (Arv*)malloc(sizeof(Arv));
        a->cod = v;
        a->esq = a->dir = NULL;
    }
    else if (v < a->cod){
        a->esq = abb_insere(a->esq,v);
    }else{
        a->dir = abb_insere(a->dir, v);
    }
    a->curso = (Curso*)malloc(sizeof(Curso));
    a->curso->alunos = (Lista*)malloc(sizeof(Lista));
    printf("Arvore locada com sucesos");
    return a;
}