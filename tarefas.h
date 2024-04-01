#define TOTAL 100
typedef struct {
    int prioridade;
    char descricao[300];
    char categoria[300];
}Tarefa;
typedef enum {OK, MAX_TAREFAS, SEM_TAREFAS,NAO_ENCONTRADA, ABRIR, 
FECHAR, ESCREVER, LER }ERROS;

typedef ERROS(*funcao)(Tarefa[], int*);

ERROS criar(Tarefa tarefas[], int *pos );
ERROS deletar(Tarefa tarefas[], int *pos );
ERROS listar(Tarefa tarefas[], int *pos );
ERROS salvar(Tarefa tarefas[], int *pos );
ERROS carregar(Tarefa tarefas[], int *pos );

void clearBuffer();

