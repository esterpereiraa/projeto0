#include<stdio.h>
#include "tarefas.h"
 


int main(){
    funcao fs[] = {criar,deletar, listar, salvar, carregar};
    Tarefa tarefas [TOTAL];
    int pos;
    ERROS erro = fs[4](tarefas, &pos);
    if (erro != OK)
        pos = 0;
    int opcao;
    do{
        printf("\nMENU PRINCIPAL\n");
        printf("1 - Criar tarefa\n");
        printf("2 - Deletar tarefa\n");
        printf("3 - Listar tarefa\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d",&opcao);
        /*printf("Opcao escolhida: %d \n", opcao);*/
        opcao--;
        if(opcao > 2)
            printf("Opcao invalida\n");
        else if (opcao>= 0 && opcao <= 2)
            fs[opcao](tarefas, &pos);
        else
            printf("Sair...\n");
        
        
    }while (opcao>=0);
}
