#include <stdio.h>
#include <stdlib.h>
#include "abb.h"

Arv* insereCurso(Arv* arvore){
    abb_insere(arvore, 1);
    return arvore;
}

void openUniversity(){
    Arv* arvore = (Arv*)malloc(sizeof(Arv));
    arvore = NULL;
    int aberto = 1;
    int ctrl;
    while (aberto)
    {
        scanf("%d", &ctrl);
        switch (ctrl)
        {
        case 1:
            insereCurso(arvore);
            break;
        case 7:
            aberto = 0;
            break;
        default:
            break;
        }
    }
    
}