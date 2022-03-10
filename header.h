#include <stdio.h>
#include <stdlib.h>

struct Node {
	int num;
	struct Node *prox;
};
typedef struct Node node;

int tam;

void inicia(node *LISTA);
int menu(void);
void opcao(node *LISTA, int op);
