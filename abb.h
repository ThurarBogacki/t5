struct lista{
    char nome[25];
    int matricula;
    int ano;
    struct lista* prox;
}; typedef struct lista Lista;

struct curso{
    char nome[30];
    struct lista* alunos;
}; typedef struct curso Curso;

struct arv {
int cod;
struct arv* esq;
struct arv* dir;
struct curso* curso;
};
typedef struct arv Arv;

Arv* abb_insere(Arv* a, int v);
void abb_imprime(Arv* a);