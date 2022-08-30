#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

//ESTRUTURA INFO CLIENTE
typedef struct cliente Cliente;

//ESTRUTURA PEDIDO
typedef struct pedido Pedido;

//NO CLIENTE
typedef struct nocliente NoCliente;

//LISTA CLIENTE
typedef struct listacliente ListaCliente;

//ESTRUTURA PILHA
typedef struct pilha Pilha;

//ESTRUTURA FILA
typedef struct fila Fila;

void entrada();

void menu();

int cardapio ();

int controladorapizza (Pedido *p);

int controladorabebida (Pedido *p);

int somapizza (Pedido *p);

int somabebida (Pedido *p);

//LER INFO CLIENTES
void lerCliente(Cliente *c);

//FUN��O INSERIR CLIENTE NO INICIO DA LISTA
void inserirInicio (ListaCliente *plista, Cliente dado);

//FUN��O INSERIR CLIENTE NO FIM DA LISTA
void inserirFim(ListaCliente *plista, Cliente dado);

//MOSTRAR LISTA DE CLIENTES
void mostrar (ListaCliente lista1);

//FUN��O PARA PESQUISAR CLIENTE NA LISTA
NoCliente* pesquisar(ListaCliente lista, int num_mesa);

//FUN��O PARA INSERIR UM CLIENTE AP�S UM DETERMINADO OUTRO CLIENTE
NoCliente* inserirApos (ListaCliente *plista, Cliente dado, int num_mesa);

//FUN��O PARA INSERIR UM CLIENTE ANTES UM DETERMINADO OUTRO CLIENTE
NoCliente* inserirAntes (ListaCliente *plista, Cliente dado, int num_mesa);

//FUN��O PARA DELETAR INICIO DA LISTA
void deletarInicio(ListaCliente *plista);

//FUN��O PARA DELETAR FIM DA LISTA
void deletarFim(ListaCliente *plista);

//FUN��O PARA DELETAR ITEM ESPECIFICO DA LISTA
void deletarItemEspecifico(ListaCliente *plista, int num_mesa);

//FUN��O PARA DELETAR APOS UM DADO N� DA LISTA
void deletarApos(ListaCliente *plista, int num_mesa);

//FUN��O PARA DELETAR ANTES DE UM DADO N� DA LISTA
void deletarAntes(ListaCliente *plista, int num_mesa);

//FUN��O PARA DELETAR LISTA
void deletarLista(ListaCliente *plista);

//FUN��O PARA ALTERAR NOME DE UM CLIENTE DE UMA DETERMINADA MESA
void alterar (ListaCliente *plista, int num_mesa, char nomenovo[]);

//FUN��O PARA INFORMAR O TAMANHO DA LISTA
int tamanho (ListaCliente *plista);

//FUN��O PARA CRIAR UMA LISTA COM UM NUMERO N DE CLIENTES
ListaCliente criarLista(int n);

//FUN��O PARA SALVAR LISTA DE CLIENTES EM UM ARQUIVO BIN�RIO
void salvarArquivo(ListaCliente lista);

//FUN��O PARA LER UMA LISTA DE CLIENTES DE UM ARQUIVO BIN�RIO
ListaCliente lerArquivo();

//FUN��O PARA PREENCHER UMA PILHA DE CLIENTES
void pushPilha (Pilha *ppilha, Cliente dado);

//FUN��O PARA ESVAZIAR UMA PILHA DE CLIENTES
void popPilha (Pilha *ppilha);

//FUN��O PARA MOSTRAR A PILHA DE CLIENTES
void mostrarPilha(Pilha pilha);

//FUN��O PARA VERIFICAR SE A PILHA DE CLIENTES EST� VAZIA
int isEmpty(Pilha pilha);

//FUN��O PARA PEGAR O CLIENTE DO TOPO DA PILHA
NoCliente* topo (Pilha pilha);

//FUN��O PARA INVERTER A PILHA DE CLIENTES
void inverterPilha(Pilha *ppilha);

//FUN��O PARA SALVAR UMA PILHA DE CLIENTES EM UM ARQUIVO BIN�RIO
void salvarPilha (Pilha pilha);

//FUN��O PARA LER UMA PILHA DE CLIENTES DE UM ARQUIVO BIN�RIO
Pilha lerPilha ();

//FUN��O PARA INSERIR CLIENTES EM UMA FILA
void inserirFila (Fila *pfila, Cliente dado);

//FUN��O PARA REMOVER CLIENTE DE UMA FILA
void removerFila (Fila *pfila);

//FUN��O PARA MOSTRAR FILA DE CLIENTES
void mostrarFila (Fila fila);

//FUN��O PARA VERIFICAR SE A FILA EST� VAZIA
int filaVazia(Fila fila);

//FUN��O PARA PEGAR O PRIMEIRO CLIENTE DA FILA
NoCliente* inicioFila (Fila fila);

//FUN��O PARA SALVAR FILA DE CLIENTES EM UM ARQUIVO DE TEXTO
void salvarFila(Fila fila);

//FUN��O PARA LER UMA FILA DE CLIENTES DE UM ARQUIVO BIN�RIO
Fila lerFiladeArquivo();

//FUN��O PRINCIPAL DO PROGRAMA
void mainCliente();


#endif // CLIENTE_H_INCLUDED
