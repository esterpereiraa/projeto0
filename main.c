#include<stdio.h>
 
int main(){
    int opcao;
    do{
        printf("\nMENU PRINCIPAL\n");
        printf("1 - Criar tarefa\n");
        printf("2 - Deletar tarefa\n");
        printf("3 - Listar tarefa\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d",&opcao);
        printf("Opcao escolhida: %d \n", opcao);
        
    }while (opcao);
}
