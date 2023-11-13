#include <stdio.h>
#include <stdlib.h>
#include "abb.h"

Arv* insereCurso(Arv* arvore){
    int cod;
    printf("Qual o codigo do curso? \n");
    scanf("%d", &cod);
    arvore = abb_insere(arvore, cod);
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
            arvore = insereCurso(arvore);
            break;
        case 2:
            abb_imprime(arvore);
            break;
        case 7:
            aberto = 0;
            break;
        default:
            break;
        }
    }
    
}