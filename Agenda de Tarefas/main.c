#include <stdio.h>
#include <stdlib.h>
#include "AgendamentoTarefas.h"

int main(){

	int op,i,tmp,id;

    tarefa *lista;
    lista = inicializa (lista);
    

	do{
		mostraMenu();
		scanf("%d",&op);
		switch(op){
			case 1:
                lista = adicionarTarefa(lista);
				break;
			case 2:
				imprimeTodos(lista);
				break;
			case 3:
                imprimeTodos(lista);
                printf("Por favor digite o ID de uma tarefa");
                scanf("%d", &id);
				lista = removerTarefa(lista, id);
				break;
			case 4:
                imprimeTodos(lista);
                printf("Por favor digite o ID de uma tarefa");
                scanf ("%d", &id);
                lista = editaTarefa (lista, id);
				break;
			case 5:
				carregaArquivo(lista);
				break;
			case 6:
                printf("1");
				escreveArquivo(lista);
				break;
            case 7:
                //computar a agenda do dia
                break;
            case 8:
                //salvar a agenda do dia
                break;
			case 0:
				printf("Obrigado por usar o nosso programa!\n"); 
                libera_lst(lista);
				break;

			default:
				printf("OPCAO NAO CADASTRADA!\n"); 
                fclose(arq);
				system("pause");
				break;

		}
	}while(op!=0);
}