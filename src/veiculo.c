#include "veiculo.h"
#include "cliente.h"


struct veiculo
{
    int atendido;
    char marca[100];
    char modelo[100];
    char placa[12];
    char cor[12];
    char tipo_servico[100];
    Cliente *cliente;
    Veiculo *prox;
};

Veiculo *vci_cria(void)
{
    return NULL;
}

Veiculo *vci_add(Veiculo *v, char *marca, char *modelo, char *placa, char *cor, char *tipo_servico, Cliente *c)
{
    Veiculo *novo;
    Veiculo *ant = NULL;
    Veiculo *p = v; // Lista auxiliar
    /*procurando posição de inserção*/
    while (p != NULL && strcmp(p->modelo, modelo) < 0)
    {
        ant = p;
        p = p->prox;
    }

    novo = (Veiculo *)malloc(sizeof(Veiculo));
    strcpy(novo->marca, marca);
    strcpy(novo->modelo, modelo);
    strcpy(novo->placa, placa);
    strcpy(novo->cor, cor);
    strcpy(novo->tipo_servico, tipo_servico);
    novo->cliente = c;
    novo->atendido = 0;

    /*Encandeia veiculo*/
    if (ant == NULL) /* insere no inicio */
    {
        novo->prox = v;
        v = novo;
    }
    else /* insere no meio da lista de veiculos */
    {
        novo->prox = ant->prox;
        ant->prox = novo;
    }

    return v;
}
void vci_imprime(Veiculo *v)
{
    Veiculo *p; // pecorrer a lista
    printf("ID\tMARCA\tMODELO\tPLACA\tCOR\tSERVIÇO\n");
    for (p = v; p != NULL; p = p->prox)
    {
        printf("%s\t%s\t%s\t%s\t%s - CLIENTE %s\n", p->marca, p->modelo, p->placa, p->cor, p->tipo_servico, p->cliente->nome);
    }
}
int vci_is_empty(Veiculo *v)
{
    if (v == NULL)
        return 1;
    return 0;
}
Veiculo *vci_busca(Veiculo *v, char *placa)
{
    Veiculo *p;
    for (p = v; p != NULL; p = p->prox)
    {
        if (strcmp(p->placa, placa) == 0)
            return p;
    }
}
Veiculo *vci_retira(Veiculo *v, char *placa)
{
    Veiculo *ant = NULL;
    Veiculo *p = v;

    /* Procura veiculo na lista,
       guardando anterior */
    while (p != NULL && strcmp(p->placa, placa) < 0)
    {
        ant = p;
        p = p->prox;
    }
    /* Verifica se achou veiculo */
    if (p == NULL)
        return v;
    /* retira veiculo */
    if (ant = NULL)
        v = p->prox; /* retira veiculo do inicio */
    else
        ant->prox = p->prox; /* retira elemento do meio */
    free(p);
    return v;
}
void vci_libera(Veiculo *v)
{
    Veiculo *p = v;
    while (p != NULL)
    {
        Veiculo *t = p->prox;
        free(p);
        p = t;
    }
}
Veiculo *excluir_vci_cliente(Veiculo *v, int id)
{
    Veiculo *ant = NULL;
    Veiculo *p = v;

    /* procura elemento na lista,
        guardando anterior */
    while (p != NULL && p->cliente->id != id)
    {
        ant = p;
        p = p->prox;
    }
    /* verifica se achou o elemento */
    if (p == NULL)
        return v;
    /* retira elemento */
    if (ant == NULL)
        v = p->prox; // retira o elemento do inicio
    else
        ant->prox = p->prox; // retira elemento do meio
    free(p);
    return v;
}