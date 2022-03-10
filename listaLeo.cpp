#include "header.h"


int main(void){
	
	node *LISTA = (node *) malloc(sizeof(node));
	if(!LISTA){
		printf("Espaco insuficiente");
		exit(1);
	}else inicia(LISTA);
	int opt;	
	
	 do{
  opt=menu();
  opcao(LISTA,opt);
 }while(opt);

 free(LISTA);
 return 0;
 }

