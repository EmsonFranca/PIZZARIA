#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

struct cliente {
    char nome [100];
    int numero_da_mesa;
};

struct pedido{
    int oppizza;
    int opbebida;
    float totalpiz;
    float totalbeb;
    float totalpedido;
};

struct nocliente{
    Cliente dado;
    struct nocliente *prox;
};

struct listacliente{
   NoCliente *inicio;
};

struct pilha{
    NoCliente *topo;
};
struct fila{
    NoCliente *inicio;
    NoCliente *fim;
};

void entrada(){
    printf ("*****************************************************\n");
    printf ("************          Bem Vindo          ************\n");
    printf ("************              a              ************\n");
    printf ("************          PIZZARIA++         ************\n");
    printf ("*****************************************************\n");
}

   void menu(){
    printf("\n=================ESCOLHA UMA OPCAO==================\n");
    printf("1 -       Inserir Cliente no Inicio da Lista\n");
    printf("2 -       Inserir Cliente no Fim da Lista\n");
    printf("3 -           Inserir Cliente Apos\n");
    printf("4 -           Inserir Cliente Antes\n");
    printf("5 -               Mostrar Lista\n");
    printf("6 -     Pesquisar Cliente pelo Numero da Mesa\n");
    printf("7 -     Deletar Cliente do Inicio da Lista\n");
    printf("8 -     Deletar Cliente do Final da Lista\n");
    printf("9 -     Deletar Cliente Especifico da Lista\n");
    printf("10 -          Deletar Cliente Apos\n");
    printf("11 -          Deletar Cliente Antes\n");
    printf("12 -        Deletar lista de Clientes\n");
    printf("13 -         Alterar Nome do Cliente\n");
    printf("14 -             Tamanho da Lista\n");
    printf("15 -              Criar Lista\n");
    printf("16 -             Ordenar Lista\n");
    printf("17 -         Salvar Lista em Arquivo\n");
    printf("18 -         Ler Lista em um Arquivo\n");
    printf("19 -            Adicionar a Pilha\n");
    printf("20 -             Mostrar Pilha\n");
    printf("21 -        Remover Cliente da Pilha\n");
    printf("22 -          Verificar Pilha Vazia\n");
    printf("23 -      Pegar Cliente no Topo da Pilha\n");
    printf("24 -             Inverter Pilha\n");
    printf("25 -          Salvar Pilha em Arquivo\n");
    printf("26 -          Ler Pilha em um Arquivo\n");
    printf("27 -          Inserir Cliente na Fila\n");
    printf("28 -          Mostrar Fila de Clientes\n");
    printf("29 -          Remover Cliente da Fila\n");
    printf("30 -           Verificar Fila Vazia\n");
    printf("31 -       Pegar Cliente do Topo da Fila\n");
    printf("32 -           Salvar Fila em Arquivo\n");
    printf("33 -           Ler Fila em um Arquivo\n");
    printf("34 -               Sair\n");
    printf("=====================================================\n");
}

int cardapio (){
    int op;
    printf("\n=======CARDAPIO========\n");
    printf("1 - Pizzas. \n");
    printf("2 - Bebidas. \n");
    printf("3 - Finalizar o pedido.\n");
    printf("========================\n");
    printf("Digite a opcao desejada: \n");
    scanf("%d", &op);
    printf ("\n");
return op;
}

int controladorapizza (Pedido *p){
    //INFORMA QUAL PIZZA O CLIENTE PEDIO
    printf ("1 - Pizza Mussarela - 18,00 R$ \n");
    printf ("2 - Pizza Calabresa - 18,00 R$ \n");
    printf ("3 - Pizza Frango com Catupiry - 18,00 R$ \n");
    printf ("4 - Pizza Quatro Queijos - 22,00 R$ \n");
    printf ("5 - Pizza Portuguesa - 22,00 R$ \n");
    printf ("Digite a opcao desejada: \n");
    scanf ("%d", &p->oppizza);

    switch (p->oppizza){
    case 1:
    printf ("\nVoce adicionou pizza de Mussarela a sua bandeja!\n");
    break;

    case 2:
    printf ("\nVoce adicionou pizza de Calabresa a sua bandeja!\n");
    break;

    case 3:
    printf ("\nVoce adicionou pizza de Frango com Catupiry a sua bandeja!\n");
    break;

    case 4:
    printf ("\nVoce adicionou pizza de Quatro Queijos a sua bandeja!\n");
    break;

    case 5:
    printf ("\nVoce adicionou pizza de Portuguesa a sua bandeja!\n");
    break;

    default:
    printf ("\nValor incorreto, tente novamente\n");
    break;
    }

return p->oppizza;

}

int controladorabebida (Pedido *p) {
char bebida [20];

    printf ("1 - Suco - 5,00 R$ \n");
    printf ("2 - Refrigerante Lata - 4,00 R$\n");
    printf ("3 - Refrigerante 2L - 13,00 R$\n");
    printf ("Digite a opcao desejada: \n");
    scanf ("%d", &p->opbebida);

    switch (p->opbebida){
    case 1:
    printf ("\nInforme o sabor do suco: \n");
    scanf ("%s", bebida);
    printf ("\nVoce adicionou suco de %s a sua bandeja!\n", bebida);
    break;

    case 2:
    printf ("\nInforme o refrigerante lata: ");
    scanf ("%s", bebida);
    printf ("\nVoce adicionou %s lata a sua bandeja!\n", bebida);
    break;

    case 3:
    printf ("\nInforme o refrigerante 2 Litros: ");
    scanf ("%s", bebida);
    printf ("\nVoce adicionou %s 2 Litros a sua bandeja!\n", bebida);
    break;

    default:
    printf ("\nComando incorreto, tente novamente\n");
    break;
    }

    return p->opbebida;
}

int somapizza (Pedido *p){
int precopizza;
    //FAZ A SOMA DAS PIZZAS DE ACORDO COM O PEDIDO DO CLIENTE
    switch (p->oppizza){
      case 1:
          precopizza = 18;
          break;
      case 2:
          precopizza = 18;

          break;
      case 3:
          precopizza = 18;

          break;
      case 4:
          precopizza = 22;

          break;

      case 5:
          precopizza = 22;

          break;
    }
//RETORTA O VALOR FINAL
return precopizza;
}

int somabebida (Pedido *p){
int precobebida;

    switch (p->opbebida){
      case 1:
        precobebida = 5;
        break;
      case 2:
        precobebida = 4;
        break;
      case 3:
        precobebida = 13;
        break;
    }

return precobebida;
}

void lerCliente(Cliente *c){
    //LER OA DADOS DO CLIENTE. NOME / MESA
    printf("Nome: ");
    scanf("%s", c->nome);
    printf("Numero da Mesa: ");
    scanf("%d", &c->numero_da_mesa);
    printf("\n");
}

void inserirInicio (ListaCliente *plista, Cliente dado){
    NoCliente *novo = (NoCliente*) malloc(sizeof(NoCliente));
    novo->dado = dado;
    novo->prox = plista->inicio;
    plista->inicio = novo;
}

void inserirFim(ListaCliente *plista, Cliente dado){
    NoCliente *novo = (NoCliente*) malloc (sizeof(NoCliente));
    novo->dado = dado;
    novo->prox = NULL;
    if(plista->inicio == NULL){
        plista->inicio = novo;
    }
    else {
        NoCliente* pi;
        for(pi=plista->inicio; pi->prox != NULL; pi=pi->prox);
        pi->prox = novo;
    }
}

void mostrar (ListaCliente lista1){
    NoCliente *pi;
    printf("\nLISTA DE CLIENTES\n");
    for(pi=lista1.inicio; pi != NULL; pi=pi->prox){
        printf("Nome: %s\n", pi->dado.nome);
        printf("Numero da Mesa: %d\n", pi->dado.numero_da_mesa);
        printf("\n");
    }
    printf("\n");
}

NoCliente* pesquisar(ListaCliente lista, int num_mesa){
    NoCliente* pi;
    for(pi=lista.inicio; pi!=NULL && pi->dado.numero_da_mesa!=num_mesa; pi = pi->prox);
    return pi;
}

NoCliente* inserirApos (ListaCliente *plista, Cliente dado, int num_mesa){
    NoCliente*pi;
    for(pi=plista->inicio; pi->prox!=NULL && pi->dado.numero_da_mesa!=num_mesa; pi=pi->prox);
    if(pi==NULL){
        return pi;
    }
    else{
        NoCliente *novo = (NoCliente*) malloc(sizeof(NoCliente));
        novo->dado = dado;
        novo->prox = pi->prox;
        pi->prox = novo;
        return pi;
    }
}

NoCliente* inserirAntes (ListaCliente *plista, Cliente dado, int num_mesa){
    if(plista->inicio == NULL){
        return NULL;
    }
    else if(plista->inicio->dado.numero_da_mesa == num_mesa){
        NoCliente* novo = (NoCliente*)malloc(sizeof(NoCliente));
        novo->dado=dado;
        novo->prox=plista->inicio;
        plista->inicio=novo;
        return novo;
    }
    else{
        NoCliente*pi;
        for(pi=plista->inicio; pi->prox!=NULL && pi->prox->dado.numero_da_mesa!=num_mesa; pi=pi->prox);
        if(pi->prox==NULL){
            return NULL;
        }
        else{
            NoCliente *novo = (NoCliente*)malloc(sizeof(NoCliente));
            novo->dado=dado;
            novo->prox=pi->prox;
            pi->prox=novo;
            return pi;
        }
    }
}

void deletarInicio(ListaCliente *plista){
    //DELETA O INICIO DA LISTA
    if(plista->inicio == NULL){
        printf("A lista esta vazia\n");
    }
    NoCliente* pi = plista->inicio;
    plista->inicio = pi->prox;//VAI SER APONTADO UMA POSI��O A FRENTTE E EXLUI O INICIO DA LISTA
    free(pi);
    printf("CLIENTE DO INICIO DA LISTA REMOVIDO COM SUCESSO!\n");
}


void deletarFim(ListaCliente *plista){
    if(plista->inicio == NULL){
        printf("Lista vazia\n");
    }
    else if(plista->inicio->prox == NULL){
        NoCliente* pi = plista->inicio;
        plista->inicio = NULL;
        free(pi);
        printf("CLIENTE DO FINAL DA LISTA REMOVIDO COM SUCESSO!\n");
    }
    else{
        NoCliente* pi;
        NoCliente* pa;
        for(pi=plista->inicio; pi->prox!=NULL; pi=pi->prox){
            pa = pi;
        }
        pa->prox = NULL;
        free(pi);
        printf("CLIENTE DO FINAL DA LISTA REMOVIDO COM SUCESSO!\n");
    }
}

void deletarItemEspecifico(ListaCliente *plista, int num_mesa){
    //Inicio == NULL
    if(plista->inicio == NULL){
        printf("Lista vazia\n");
    }
    //No se encontra no iniccio
    else if(plista->inicio->dado.numero_da_mesa == num_mesa){
        NoCliente* pi = plista->inicio;
        plista->inicio = pi->prox;
        free(pi);
        printf("CLIENTE REMOVIDO COM SUCESSO!\n");
    }
    //Lista tem um unico No. Item a ser procurado nao existe
    else if(plista->inicio == NULL){
        if(plista->inicio->dado.numero_da_mesa != num_mesa){
            printf("Nao foi possivel remover cliente\n");
        }
    }
    //Lista com multiplos Nos. Valor existe
    //Lista com multiplos Nos. Valor nao existe
    else{
        NoCliente* pa;
        NoCliente* pi;
        for(pi=plista->inicio; pi!=NULL && pi->dado.numero_da_mesa!=num_mesa; pi=pi->prox){
            pa = pi;
        }
        if(pi == NULL){
            printf("Cliente nao foi encontrado!\n");
        }
        else{
            pa->prox = pi->prox;
            free(pi);
            printf("CLIENTE REMOVIDO COM SUCESSO!\n");
        }
    }
}

void deletarApos(ListaCliente *plista, int num_mesa){
    NoCliente* pa;
    NoCliente* pi;
    for(pa=plista->inicio; pa!=NULL && pa->dado.numero_da_mesa!=num_mesa; pa=pa->prox){
        if(pa == NULL){
            printf("Nao foi possivel remover cliente\n");
        }
        else if(pa->prox == NULL){
            printf("Nao foi possivel remover cliente\n");
        }
        else{
            pi = pa->prox;
            pa->prox = pi->prox;
            free(pi);
            printf("CLIENTE REMOVIDO COM SUCESSO!\n");
        }
    }
}

void deletarAntes(ListaCliente *plista, int num_mesa){
    //Lista vazia
    if(plista->inicio==NULL){
        printf("Lista vazia\n");
    }
    else{
        NoCliente* paa = NULL;
        NoCliente* pa = NULL;
        NoCliente* pi;
        for(pi=plista->inicio; pi!=NULL && pi->dado.numero_da_mesa!=num_mesa; pi=pi->prox){
            paa=pa;
            pa=pi;
    }
        //Multiplos itens. Existe.
        if(pi == NULL){
            printf("Nao foi possivel remover cliente\n");
        }
        //No inicial igual ao pesquisado
        else if(pa == NULL){
            printf("Nao foi possivel remover cliente\n");
        }
        //O segundo No � igual ao valor pesquisado
        else if(paa == NULL){
            plista->inicio = pi;
            free(pa);
            printf("CLIENTE REMOVIDO COM SUCESSO!\n");
        }
        else{
            paa->prox = pi;
            free(pa);
            printf("CLIENTE REMOVIDO COM SUCESSO!\n");
        }
    }
}

void deletarLista(ListaCliente *plista){
    NoCliente* pi;
    while(plista->inicio != NULL){
        pi=plista->inicio;
        plista->inicio=pi->prox;
        free(pi);
        printf("LISTA DELETADA COM SUCESSO!\n");
    }
}

void alterar (ListaCliente *plista, int num_mesa, char nomenovo[]){
    NoCliente* pi = pesquisar(*plista, num_mesa);
    if(pi==NULL){
        printf("NAO FOI POSSIVEL ALTERAR\n");
    }
    else{
        strcpy(pi->dado.nome, nomenovo);
        printf("NOME ALTERADO COM SUCESSO\n");
    }
}

int tamanho (ListaCliente *plista){
    NoCliente* pi;
    int cont=0;
    for(pi=plista->inicio; pi!=NULL; pi=pi->prox){
        cont++;
    }
    return cont;
}

ListaCliente criarLista(int n){
    ListaCliente lista;
    lista.inicio = NULL;
    int i;
    for(i=0; i<n; i++){
        Cliente c;
        lerCliente(&c);
        inserirFim(&lista, c);
    }
    return lista;
}

void salvarArquivo(ListaCliente lista){
    FILE *file;
    file = fopen("clientes.b", "wb");
    NoCliente* pi;
    for(pi=lista.inicio; pi!=NULL; pi=pi->prox){
        fwrite(&pi->dado, sizeof(Cliente), 1, file);
    }
    printf("SALVO EM ARQUIVO COM SUCESSO!\n");
    fclose(file);
}

ListaCliente lerArquivo(){
    ListaCliente lista;
    lista.inicio = NULL;
    FILE* file;
    file = fopen("clientes.b", "rb");
    Cliente c;
    while(fread(&c, sizeof(Cliente), 1, file)){
        inserirFim(&lista, c);
    }
    printf("ARQUIVO LIDO COM SUCESSO\n");
    fclose(file);
    return lista;
}

void ordenar(ListaCliente *plista){
    NoCliente* pi;
    NoCliente* pj;
    NoCliente* pfim = NULL;
    Cliente aux;
    if(plista->inicio == NULL){
        return;
    }
    for(pi=plista->inicio; pi->prox!=NULL; pi=pi->prox){
        for(pj=plista->inicio; pj->prox!=pfim; pj=pj->prox){
            if(pj->dado.numero_da_mesa > pj->prox->dado.numero_da_mesa){
                aux = pj->dado;
                pj->dado = pj->prox->dado;
                pj->prox->dado = aux;
            }
        }
        pfim = pj;
        printf("LISTA ORDENADA COM SUCESSO!\n");
        printf("CRITERIO: numero da mesa.\n");
    }
}

void pushPilha (Pilha *ppilha, Cliente dado){
    NoCliente* novo = (NoCliente*) malloc(sizeof(NoCliente));
    novo->dado = dado;
    novo->prox = ppilha->topo;
    ppilha->topo = novo;
}

void popPilha (Pilha *ppilha){
    if(ppilha->topo == NULL){
        printf("PILHA VAZIA!\n");
    }
    else{
        NoCliente * pi = ppilha->topo;
        ppilha->topo = pi->prox;
        free(pi);
    }
}

void mostrarPilha(Pilha pilha){
    NoCliente * pi;
    for(pi=pilha.topo; pi!=NULL; pi=pi->prox){
        printf("Nome: %s\nNumero da Mesa: %d\n\n", pi->dado.nome, pi->dado.numero_da_mesa);
    }
}

int isEmpty(Pilha pilha){
    if(pilha.topo == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

NoCliente* topo (Pilha pilha){
    return pilha.topo;
}

void inverterPilha(Pilha *ppilha){
    Pilha aux;
    aux.topo = NULL;
    NoCliente * pi;
    for(pi=ppilha->topo; pi!=NULL; pi=ppilha->topo){
       pushPilha(&aux, pi->dado);
       popPilha(ppilha);
    }
    ppilha->topo = aux.topo;
}

void salvarPilha (Pilha pilha){
    FILE* file = fopen("clientes.b", "wb");
    NoCliente* pi;
    for(pi=pilha.topo; pi!=NULL; pi=pi->prox){
        fwrite(&pi->dado, sizeof(Cliente), 1, file);
    }
    printf("PILHA DE CLIENTES SALVA EM ARQUIVO COM SUCESSO!\n");
    fclose(file);
}

Pilha lerPilha (){
    FILE* file = fopen("clientes.b", "rb");
    Pilha pilha;
    pilha.topo = NULL;
    Cliente c;
    while(fread(&c, sizeof(Cliente), 1, file)){
        pushPilha(&pilha, c);
    }
    inverterPilha(&pilha);
    printf("PILHA LIDA DE ARQUIVO COM SUCESSO!\n");
    fclose(file);
}

void inserirFila (Fila *pfila, Cliente dado){
    NoCliente* novo = (NoCliente*) malloc(sizeof(NoCliente));
    novo->dado = dado;
    novo->prox = NULL;
    if(pfila->inicio == NULL){
        pfila->inicio=novo;
        pfila->fim=novo;
    }
    else{
        pfila->fim->prox=novo;
        pfila->fim=novo;
    }
}

void removerFila (Fila *pfila){
    if(pfila->inicio == NULL){
        printf("FILA VAZIA!\n");
    }
    else if(pfila->inicio->prox==NULL){
        pfila->inicio = NULL;
        pfila->fim = NULL;
    }
    else{
        NoCliente* pi = pfila->inicio;
        pfila->inicio = pi->prox;
        free(pi);
    }
}

void mostrarFila (Fila fila){
    NoCliente* pi;
    for(pi=fila.inicio; pi != NULL; pi=pi->prox){
        printf("Nome: %s\nNumero da Mesa: %d\n\n", pi->dado.nome, pi->dado.numero_da_mesa);
    }
}

int filaVazia(Fila fila){
    if(fila.inicio == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

NoCliente* inicioFila (Fila fila){
    return fila.inicio;
}

void salvarFila(Fila fila){
    FILE* file = fopen ("clientes.b", "wb");
    NoCliente* pi;
    for(pi=fila.inicio; pi!=NULL; pi=pi->prox){
        fwrite(&pi->dado, sizeof(Cliente), 1, file);
    }
    fclose(file);
}

Fila lerFiladeArquivo(){
    Fila fila;
    fila.inicio = NULL;
    fila.fim = NULL;
    FILE* file = fopen ("clientes.b", "rb");
    Cliente c;
    while(fread(&c, sizeof(Cliente), 1, file)){
        inserirFila(&fila, c);
    }
    fclose(file);
}

void mainCliente(){

    entrada();

    ListaCliente lista1; // LISTA REFERENTE AO CLIENTE
    lista1.inicio = NULL;

    Pilha pilha;
    pilha.topo = NULL;

    Fila fila;
    fila.inicio = NULL;
    fila.fim = NULL;

    int op;
    int precopizza,precobebida;

    menu();
    int opMenu;
    scanf("%d", &opMenu);
    while(opMenu != 34){
        if(opMenu == 1){
            Pedido *p;
            p = (Pedido*) malloc(sizeof(Pedido));
            p->totalbeb = 0;
            p->totalpiz = 0;
            p->totalpedido = 0;
            Cliente c;
            lerCliente(&c);
            inserirInicio(&lista1, c);
                do{
                    op = cardapio();
                    switch(op){
                        case 1:
                        p->oppizza =  controladorapizza(p);
                        precopizza = somapizza(p);
                        p->totalpiz = precopizza + p->totalpiz++;
                        break;

                        case 2:
                        p->opbebida = controladorabebida(p);
                        precobebida = somabebida(p);
                        p->totalbeb = precobebida + p->totalbeb++;
                        break;
                    }
                }

            while(op != 3 );
            p->totalpedido = p->totalpedido + p->totalpiz + p->totalbeb;
            printf ("Valor Total do seu Pedido: %.2f", p->totalpedido);
            printf("\n");

        free(p);
        }

        if(opMenu == 2){
            Pedido *p;
            p = (Pedido*) malloc(sizeof(Pedido));
            p->totalbeb = 0;
            p->totalpiz = 0;
            p->totalpedido = 0;
            Cliente c;
            lerCliente(&c);
            inserirFim(&lista1, c);
                do{
                    op = cardapio();
                    switch(op){
                        case 1:
                        p->oppizza =  controladorapizza(p);
                        precopizza = somapizza(p);
                        p->totalpiz = precopizza + p->totalpiz++;
                        break;

                        case 2:
                        p->opbebida = controladorabebida(p);
                        precobebida = somabebida(p);
                        p->totalbeb = precobebida + p->totalbeb++;
                        break;
                    }
                }

            while(op != 3 );
            p->totalpedido = p->totalpedido + p->totalpiz + p->totalbeb;
            printf ("Valor Total do seu Pedido: %.2f", p->totalpedido);
            printf("\n");

            free(p);
        }
        if(opMenu == 3){
            Pedido *p;
            p = (Pedido*) malloc(sizeof(Pedido));
            p->totalbeb = 0;
            p->totalpiz = 0;
            p->totalpedido = 0;
            Cliente c;
            lerCliente(&c);
                do{
                    op = cardapio();
                    switch(op){
                        case 1:
                        p->oppizza =  controladorapizza(p);
                        precopizza = somapizza(p);
                        p->totalpiz = precopizza + p->totalpiz++;
                        break;

                        case 2:
                        p->opbebida = controladorabebida(p);
                        precobebida = somabebida(p);
                        p->totalbeb = precobebida + p->totalbeb++;
                        break;
                    }
                }

            while(op != 3 );
            p->totalpedido = p->totalpedido + p->totalpiz + p->totalbeb;
            printf ("Valor Total do seu Pedido: %.2f", p->totalpedido);
            printf("\n");

            int num_mesa;
            printf("\nInforme o numero da mesa para inserir o cliente apos ela: ");
            scanf("%d", &num_mesa);
            NoCliente *pi = inserirApos(&lista1, c, num_mesa);
            if(pi == NULL){
                printf("\nNao foi possivel inserir o cliente\n");
            }
            free(p);
        }
        if(opMenu == 4){
            Pedido *p;
            p = (Pedido*) malloc(sizeof(Pedido));
            p->totalbeb = 0;
            p->totalpiz = 0;
            p->totalpedido = 0;
            Cliente c;
            lerCliente(&c);
                do{
                    op = cardapio();
                    switch(op){
                        case 1:
                        p->oppizza =  controladorapizza(p);
                        precopizza = somapizza(p);
                        p->totalpiz = precopizza + p->totalpiz++;
                        break;

                        case 2:
                        p->opbebida = controladorabebida(p);
                        precobebida = somabebida(p);
                        p->totalbeb = precobebida + p->totalbeb++;
                        break;
                    }
                }

            while(op != 3 );
            p->totalpedido = p->totalpedido + p->totalpiz + p->totalbeb;
            printf ("Valor Total do seu Pedido: %.2f", p->totalpedido);
            printf("\n");

            printf("\nInforme o numero da mesa para inserir o cliente antes dela: ");
            int num_mesa;
            scanf("%d", &num_mesa);
            NoCliente *pi= inserirAntes(&lista1, c, num_mesa);
            if(pi==NULL){
                printf("\nNao foi possivel inserir o cliente\n");
            }
            free(p);
        }
        if (opMenu == 5){
            mostrar(lista1);
        }
        if(opMenu == 6){
            printf("Informe o numero da mesa que deseja buscar\n");
            int num_mesa;
            scanf("%d", &num_mesa);
            NoCliente* pi = pesquisar(lista1, num_mesa);
                if(pi!=NULL){
                    printf("\nCLIENTE ENCONTRADO:\nO cliente da mesa %d atende por %s\n", pi->dado.numero_da_mesa, pi->dado.nome);
                }
                else {
                    printf("\nCLIENTE NAO ENCONTRADO\nNenhum cliente encontrado na mesa %d\n", num_mesa);
                }
        }
        if(opMenu == 7){
            deletarInicio(&lista1);
        }
        if(opMenu == 8){
            deletarFim(&lista1);
        }
        if(opMenu == 9){
            int num_mesa;
            printf("Digite o numero da mesa do cliente que deseja remover\n");
            scanf("%d", &num_mesa);
            deletarItemEspecifico(&lista1, num_mesa);
        }
        if(opMenu == 10){
            int num_mesa;
            printf("Digite o numero da mesa para remover o cliente da mesa seguinte\n");
            scanf("%d", &num_mesa);
            deletarApos(&lista1, num_mesa);
        }
        if(opMenu == 11){
            int num_mesa;
            printf("Digite o numero da mesa para remover o cliente da mesa anterior\n");
            scanf("%d", &num_mesa);
            deletarAntes(&lista1, num_mesa);
        }
        if(opMenu == 12){
            deletarLista(&lista1);
        }
        if(opMenu == 13){
            int num_mesa;
            printf("Informe o numero da mesa do cliente na qual deseja modificar o nome\n");
            scanf("%d", &num_mesa);
            printf("Informe o novo nome do cliente\n");
            char nomenovo[50];
            scanf("%s", nomenovo);
            alterar(&lista1,num_mesa,nomenovo);
        }
        if(opMenu == 14){
            int tam = tamanho(&lista1);
            printf("%d Clientes na Lista\n", tam);
        }
        if(opMenu == 15){
            int n;
            printf("Informe a Quantidade de Clientes\n");
            scanf("%d", &n);
            lista1 = criarLista(n);
        }
        if(opMenu == 16){
            ordenar(&lista1);
        }
        if(opMenu == 17){
            salvarArquivo(lista1);
        }
        if(opMenu == 18){
            lista1 = lerArquivo();
        }
        if(opMenu == 19){
            Pedido *p;
            p = (Pedido*) malloc(sizeof(Pedido));
            p->totalbeb = 0;
            p->totalpiz = 0;
            p->totalpedido = 0;
            Cliente c;
            lerCliente(&c);
            pushPilha(&pilha,c);
                do{
                    op = cardapio();
                    switch(op){
                        case 1:
                        p->oppizza =  controladorapizza(p);
                        precopizza = somapizza(p);
                        p->totalpiz = precopizza + p->totalpiz++;
                        break;

                        case 2:
                        p->opbebida = controladorabebida(p);
                        precobebida = somabebida(p);
                        p->totalbeb = precobebida + p->totalbeb++;
                        break;
                    }
                }

            while(op != 3 );
            p->totalpedido = p->totalpedido + p->totalpiz + p->totalbeb;
            printf ("Valor Total do seu Pedido: %.2f", p->totalpedido);
            printf("\n");

            free(p);
        }
        if(opMenu == 20){
          mostrarPilha(pilha);
        }
        if(opMenu == 21){
            popPilha(&pilha);
        }
        if(opMenu == 22){
          int result = isEmpty(pilha);
          if(result != 0){
            printf("PILHA VAZIA!\n");
          }
          else{
            printf("A PILHA CONTEM CLIENTES!\n");
          }
        }
        if(opMenu == 23){
            NoCliente *pi = topo(pilha);
            if(pi==NULL){
                printf("PILHA VAZIA!\n");
            }
            else{
                printf("Nome: %s\nNumero da Mesa: %d\n", pi->dado.nome, pi->dado.numero_da_mesa);
            }
        }
        if(opMenu == 24){
            inverterPilha(&pilha);
        }
        if(opMenu == 25){
            salvarPilha(pilha);
        }
        if(opMenu == 26){
            pilha = lerPilha();
        }
        if(opMenu == 27){
            Pedido *p;
            p = (Pedido*) malloc(sizeof(Pedido));
            p->totalbeb = 0;
            p->totalpiz = 0;
            p->totalpedido = 0;
            Cliente c;
            lerCliente(&c);
            inserirFila(&fila, c);
                do{
                    op = cardapio();
                    switch(op){
                        case 1:
                        p->oppizza =  controladorapizza(p);
                        precopizza = somapizza(p);
                        p->totalpiz = precopizza + p->totalpiz++;
                        break;

                        case 2:
                        p->opbebida = controladorabebida(p);
                        precobebida = somabebida(p);
                        p->totalbeb = precobebida + p->totalbeb++;
                        break;
                    }
                }

            while(op != 3 );
            p->totalpedido = p->totalpedido + p->totalpiz + p->totalbeb;
            printf ("Valor Total do seu Pedido: %.2f", p->totalpedido);
            printf("\n");

            free(p);
        }
        if(opMenu == 28){
            mostrarFila(fila);
        }
        if(opMenu == 29){
            removerFila(&fila);
        }
        if(opMenu == 30){
            int result = filaVazia(fila);
            if(result!=0){
                printf("FILA VAZIA\n");
            }
            else{
                printf("FILA CONTEM CLIENTES!\n");
            }
        }
        if(opMenu == 31){
            NoCliente* pi = inicioFila(fila);
            if(pi!=NULL){
                printf("Nome: %s\nNumero da Mesa: %d\n", pi->dado.nome, pi->dado.numero_da_mesa);
            }
            else{
                printf("FILA VAZIA!\n");
            }
        }
        if(opMenu == 32){
            salvarFila(fila);
        }
        if(opMenu == 33){
            fila = lerFiladeArquivo();
        }

        menu();
        scanf("%d", &opMenu);

    }
}
