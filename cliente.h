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

//FUNÇÃO INSERIR CLIENTE NO INICIO DA LISTA
void inserirInicio (ListaCliente *plista, Cliente dado);

//FUNÇÃO INSERIR CLIENTE NO FIM DA LISTA
void inserirFim(ListaCliente *plista, Cliente dado);

//MOSTRAR LISTA DE CLIENTES
void mostrar (ListaCliente lista1);

//FUNÇÃO PARA PESQUISAR CLIENTE NA LISTA
NoCliente* pesquisar(ListaCliente lista, int num_mesa);

//FUNÇÃO PARA INSERIR UM CLIENTE APÓS UM DETERMINADO OUTRO CLIENTE
NoCliente* inserirApos (ListaCliente *plista, Cliente dado, int num_mesa);

//FUNÇÃO PARA INSERIR UM CLIENTE ANTES UM DETERMINADO OUTRO CLIENTE
NoCliente* inserirAntes (ListaCliente *plista, Cliente dado, int num_mesa);

//FUNÇÃO PARA DELETAR INICIO DA LISTA
void deletarInicio(ListaCliente *plista);

//FUNÇÃO PARA DELETAR FIM DA LISTA
void deletarFim(ListaCliente *plista);

//FUNÇÃO PARA DELETAR ITEM ESPECIFICO DA LISTA
void deletarItemEspecifico(ListaCliente *plista, int num_mesa);

//FUNÇÃO PARA DELETAR APOS UM DADO NÓ DA LISTA
void deletarApos(ListaCliente *plista, int num_mesa);

//FUNÇÃO PARA DELETAR ANTES DE UM DADO NÓ DA LISTA
void deletarAntes(ListaCliente *plista, int num_mesa);

//FUNÇÃO PARA DELETAR LISTA
void deletarLista(ListaCliente *plista);

//FUNÇÃO PARA ALTERAR NOME DE UM CLIENTE DE UMA DETERMINADA MESA
void alterar (ListaCliente *plista, int num_mesa, char nomenovo[]);

//FUNÇÃO PARA INFORMAR O TAMANHO DA LISTA
int tamanho (ListaCliente *plista);

//FUNÇÃO PARA CRIAR UMA LISTA COM UM NUMERO N DE CLIENTES
ListaCliente criarLista(int n);

//FUNÇÃO PARA SALVAR LISTA DE CLIENTES EM UM ARQUIVO BINÁRIO
void salvarArquivo(ListaCliente lista);

//FUNÇÃO PARA LER UMA LISTA DE CLIENTES DE UM ARQUIVO BINÁRIO
ListaCliente lerArquivo();

//FUNÇÃO PARA PREENCHER UMA PILHA DE CLIENTES
void pushPilha (Pilha *ppilha, Cliente dado);

//FUNÇÃO PARA ESVAZIAR UMA PILHA DE CLIENTES
void popPilha (Pilha *ppilha);

//FUNÇÃO PARA MOSTRAR A PILHA DE CLIENTES
void mostrarPilha(Pilha pilha);

//FUNÇÃO PARA VERIFICAR SE A PILHA DE CLIENTES ESTÁ VAZIA
int isEmpty(Pilha pilha);

//FUNÇÃO PARA PEGAR O CLIENTE DO TOPO DA PILHA
NoCliente* topo (Pilha pilha);

//FUNÇÃO PARA INVERTER A PILHA DE CLIENTES
void inverterPilha(Pilha *ppilha);

//FUNÇÃO PARA SALVAR UMA PILHA DE CLIENTES EM UM ARQUIVO BINÁRIO
void salvarPilha (Pilha pilha);

//FUNÇÃO PARA LER UMA PILHA DE CLIENTES DE UM ARQUIVO BINÁRIO
Pilha lerPilha ();

//FUNÇÃO PARA INSERIR CLIENTES EM UMA FILA
void inserirFila (Fila *pfila, Cliente dado);

//FUNÇÃO PARA REMOVER CLIENTE DE UMA FILA
void removerFila (Fila *pfila);

//FUNÇÃO PARA MOSTRAR FILA DE CLIENTES
void mostrarFila (Fila fila);

//FUNÇÃO PARA VERIFICAR SE A FILA ESTÁ VAZIA
int filaVazia(Fila fila);

//FUNÇÃO PARA PEGAR O PRIMEIRO CLIENTE DA FILA
NoCliente* inicioFila (Fila fila);

//FUNÇÃO PARA SALVAR FILA DE CLIENTES EM UM ARQUIVO DE TEXTO
void salvarFila(Fila fila);

//FUNÇÃO PARA LER UMA FILA DE CLIENTES DE UM ARQUIVO BINÁRIO
Fila lerFiladeArquivo();

//FUNÇÃO PRINCIPAL DO PROGRAMA
void mainCliente();


#endif // CLIENTE_H_INCLUDED
